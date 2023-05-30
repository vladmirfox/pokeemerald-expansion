from pcpp import Preprocessor
from cxxheaderparser.simple import parse_file
import os

globalVersion = 0

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

pull_new_version()
if (globalVersion == 0):
    print("v0 saved. please make changes in order to enable v1")
    quit()

# use cxxheaderparser to figure out everything
classes_old = {}
classes_new = {}

# global
contents_old = parse_file('versioning/global_v0.c')
contents_new = parse_file('versioning/global_v1.c')
for x in contents_old.namespace.classes:
    if hasattr(x.class_decl.typename.segments[0], 'name'):
        classes_old[x.class_decl.typename.segments[0].name] = x
for x in contents_new.namespace.classes:
    if hasattr(x.class_decl.typename.segments[0], 'name'):
        classes_new[x.class_decl.typename.segments[0].name] = x

# pokemon_storage_system
contents_old = parse_file('versioning/pokemon_storage_system_v0.c')
contents_new = parse_file('versioning/pokemon_storage_system_v1.c')
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
        if (x.name in fields_old_array):
            fields_old_array.remove(x.name)
            if (x == fields_old[x.name]):
                # print("%s is identical" % x.name)
                continue
            # figure out what exactly is different, starting with size
            oldsize = fields_old[x.name].type.size.tokens[0].value
            newsize = x.type.size.tokens[0].value
            if (oldsize != newsize):
                if (oldsize < newsize):
                    print("%s was expanded in size from %s to %s" % (x.name, oldsize, newsize))
                else:
                    print("IMPORTANT: %s was truncated in size from %s to %s" % (x.name, oldsize, newsize))
                continue
            print("%s is different!" % x.name)
        else:
            print("%s is a new field; defaulting values to zero" % x.name)

    if len(fields_old_array) > 0:
        print("The following old fields are not retained: %s" % fields_old_array)

compareFields('SaveBlock1')
compareFields('SaveBlock2')
compareFields('PokemonStorage')