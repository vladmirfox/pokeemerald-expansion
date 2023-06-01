from pcpp import Preprocessor, Evaluator
from cxxheaderparser.simple import parse_file, CxxParser, SimpleCxxVisitor
import os

globalVersion = 0
globalHasChanges = False

def preprocess_files(filename, version):
# preprocess a file and store it as files in /versioning with pcpp
    p = Preprocessor()
    path = "include/%s.h" % filename
    with open(path, 'rt') as ih:
        p.parse(ih.read(), path)
    with open('versioning/%s_v%s.c' % (filename, version), 'w') as oh:
        p.write(oh)

def pull_new_version():
    if not os.path.exists("versioning/"):
        os.mkdir("versioning/")
    global globalVersion
    while os.path.exists("versioning/global_v%s.c" % globalVersion):
        globalVersion += 1
    preprocess_files("global", globalVersion)
    preprocess_files("pokemon_storage_system", globalVersion)
    if (globalVersion == 0):
        print("v0 saved. please make changes in order to enable v1")
        quit()

def is_integer(n):
    try:
        float(n)
    except ValueError:
        return False
    else:
        return float(n).is_integer()

def parse_field(field, enumlist):
    cl = {}
    e = Evaluator()
    cl['type'] = field.type.__class__.__name__
    if hasattr(field.type, 'size'):
        sizetokens = ""
        for x in field.type.size.tokens:
            if is_integer(x.value) or x.value in ['+', '-', '%', '(', ')', '/', '?', ':'] or str(x.value).startswith("0x"):
                sizetokens += str(x.value)
            else:
                if x.value in enumlist:
                    sizetokens += str(enumlist[x.value])
                else:
                    print("Error: unable to figure out enum value of %s" % x.value)
                    quit()
        cl['size'] = e(sizetokens)
    if (field.bits != None):
        cl['bits'] = field.bits
    return(cl)

pull_new_version()

# use cxxheaderparser to figure out everything
classes_old = {}
classes_new = {}

def parse_file2(path):
    out = parse_file(path)
    enum_out = {}
    for x in out.namespace.enums:
        val = 0
        for y in x.values:
            enum_out[y.name] = val
            val += 1
    return(out, enum_out)

# global
contents_old, enums_old = parse_file2('versioning/global_v0.c')
contents_new, enums_new = parse_file2('versioning/global_v1.c')
for x in contents_old.namespace.classes:
    if hasattr(x.class_decl.typename.segments[0], 'name'):
        classes_old[x.class_decl.typename.segments[0].name] = x
for x in contents_new.namespace.classes:
    if hasattr(x.class_decl.typename.segments[0], 'name'):
        classes_new[x.class_decl.typename.segments[0].name] = x

# pokemon_storage_system
contents_old = parse_file2('versioning/pokemon_storage_system_v0.c')[0]
contents_new = parse_file2('versioning/pokemon_storage_system_v1.c')[0]
for x in contents_old.namespace.classes:
    if hasattr(x.class_decl.typename.segments[0], 'name'):
        classes_old[x.class_decl.typename.segments[0].name] = x
for x in contents_new.namespace.classes:
    if hasattr(x.class_decl.typename.segments[0], 'name'):
        classes_new[x.class_decl.typename.segments[0].name] = x

def compareFields(fieldname):
    # make list of fields
    fields_old = {}
    fields_old_array = []
    for x in classes_old[fieldname].fields:
        fields_old[x.name] = x
        fields_old_array.append(x.name)

    # compare
    print("Comparing %s" % fieldname)
    for x in classes_new[fieldname].fields:
        oldclass = parse_field(fields_old[x.name], enums_old)
        newclass = parse_field(x, enums_new)

        #print(oldclass, newclass)

        if (x.name in fields_old_array):
            fields_old_array.remove(x.name)
            if (x == fields_old[x.name]):
                # print("%s is identical" % x.name)
                continue
            # figure out what exactly is different, starting with size
            global globalHasChanges
            globalHasChanges = True
            if 'size' in newclass and 'size' in oldclass:
                oldsize = oldclass['size']
                newsize = newclass['size']
                if (oldsize != newsize):
                    if (oldsize < newsize):
                        print("%s was expanded in size from %s to %s" % (x.name, oldsize, newsize))
                    else:
                        print("IMPORTANT: %s was truncated in size from %s to %s" % (x.name, oldsize, newsize))
                    continue
            print("%s is different, but can't identify why!" % x.name)
        else:
            print("%s is a new field; defaulting values to zero" % x.name)

    if len(fields_old_array) > 0:
        print("The following old fields are not retained: %s" % fields_old_array)

compareFields('SaveBlock2')
compareFields('SaveBlock1')
compareFields('PokemonStorage')

# clean up if no changes
if not globalHasChanges:
    print("No save migration needed!")
    os.remove("versioning/global_v%s.c" % globalVersion)
    os.remove("versioning/pokemon_storage_system_v%s.c" % globalVersion)