from pcpp import Preprocessor, Evaluator
from cxxheaderparser.simple import parse_file, CxxParser, SimpleCxxVisitor
import os
import sys

trusted_typedefs = ['u8', 'u16', 'u32', 'u64', 's8', 's16', 's32', 's64', 'bool8', 'bool16', 'bool32', 'int']

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
    
def parse_size(tokens, enumlist):
    sizetokens = ""
    e = Evaluator()
    for x in tokens:
        if x.value in enumlist:
            sizetokens += str(enumlist[x.value])
        else:
            sizetokens += str(x.value)
    return e(sizetokens)

def parse_field(field, enumlist):
    cl = {}
    cl['name'] = field.name
    cl['type'] = field.type.__class__.__name__
    if (cl['type'] == "Type"):
        if hasattr(field.type.typename.segments[0], 'name'):
            cl['kind'] = field.type.typename.segments[0].name
        else:
            cl['kind'] = "__AnonymousName%s" % field.type.typename.segments[0].id
        cl['is_struct'] = (field.type.typename.classkey == 'struct')
        if field.type.typename.classkey == 'union':
            cl['is_union'] = True
    elif (cl['type'] == "Array"):
        if (field.type.array_of.__class__.__name__ == "Type"): #1D ARRAY
            cl['kind'] = field.type.array_of.typename.segments[0].name
            cl['is_struct'] = (field.type.array_of.typename.classkey == 'struct')
        elif (field.type.array_of.__class__.__name__ == "Array"):
            if (field.type.array_of.array_of.__class__.__name__ == "Type"): #2D ARRAY
                cl['kind'] = field.type.array_of.array_of.typename.segments[0].name
                cl['is_struct'] = (field.type.array_of.array_of.typename.classkey == 'struct')
            elif (field.type.array_of.__class__.__name__ == "Array"): #3D ARRAY
                cl['kind'] = field.type.array_of.array_of.array_of.typename.segments[0].name
                cl['is_struct'] = (field.type.array_of.array_of.array_of.typename.classkey == 'struct')
    elif (cl['type'] == "Pointer"):
        cl['kind'] = field.type.ptr_to.typename.segments[0].name
        cl['is_pointer'] = True
    if hasattr(field.type, 'size'):
        cl['size'] = parse_size(field.type.size.tokens, enumlist)
    if hasattr(field.type, 'array_of'):
        if hasattr(field.type.array_of, 'size'):
            cl['size2'] = parse_size(field.type.array_of.size.tokens, enumlist)
        if hasattr(field.type.array_of, 'array_of'):
            if hasattr(field.type.array_of.array_of, 'size'):
                cl['size3'] = parse_size(field.type.array_of.array_of.size.tokens, enumlist)
    if (field.bits != None):
        cl['bits'] = field.bits
    return(cl)

def parse_file2(path):
    out = parse_file(path)
    enum_out = {}
    for x in out.namespace.enums:
        val = 0
        for y in x.values:
            enum_out[y.name] = val
            val += 1
    return(out, enum_out)

def compareFields(fieldname, inline, extratext):
    extratext_display = ""
    if extratext != "":
        extratext_display = " (%s)" % extratext

    if fieldname not in GlobalClassesNew:
        invalid_resolve = True
        # check if exists in GlobalClassesOld
        if fieldname not in GlobalClassesOld:
            # fieldname can not be found, so check if it's in both referals
            if fieldname in GlobalReferNew and fieldname in GlobalReferOld:
                if GlobalReferNew[fieldname] == GlobalReferOld[fieldname]:
                    fieldname = GlobalReferNew[fieldname] # get referral (eg lilycovelady > anonymousname...)
                    invalid_resolve = False
        if invalid_resolve:
            print("WARNING: Unable to resolve %s%s" % (fieldname, extratext_display))
            return
    # make list of fields
    fields_old = {}
    fields_old_array = []
    for x in GlobalClassesOld[fieldname].fields:
        fields_old[x.name] = x
        fields_old_array.append(x.name)

    # compare
    if '--verbose' in sys.argv or '--detailed' in sys.argv or (inline == 1):
        print("  " * (inline - 1) + "Comparing %s%s" % (fieldname, extratext_display))
    for x in GlobalClassesNew[fieldname].fields:
        oldclass = parse_field(fields_old[x.name], GlobalEnumsOld)
        newclass = parse_field(x, GlobalEnumsNew)

        if (x.name in fields_old_array):
            fields_old_array.remove(x.name)
            if (x == fields_old[x.name]):
                if '--verbose' in sys.argv:
                    print("  " * inline + "%s is identical" % x.name)
                # if identical, check the actual kind to make sure the underlying struct didn't change
                if newclass['kind'] not in trusted_typedefs:
                    compareFields(newclass['kind'], inline + 1, "%s -> %s" % (extratext, x.name))
                continue
            # figure out what exactly is different, starting with size
            global globalHasChanges
            globalHasChanges = True
            if 'size' in newclass and 'size' in oldclass:
                oldsize = oldclass['size']
                newsize = newclass['size']
                if (oldsize != newsize):
                    if (oldsize < newsize):
                        print("  " * inline + "%s was expanded in size from %s to %s" % (x.name, oldsize, newsize))
                    else:
                        print("  " * inline + "IMPORTANT: %s was truncated in size from %s to %s" % (x.name, oldsize, newsize))
                    continue
            print("  " * inline + "%s is different, but can't identify why!" % x.name)
        else:
            print("  " * inline + "%s is a new field; defaulting values to zero" % x.name)

    if len(fields_old_array) > 0:
        print("  " * inline + "The following old fields are not retained: %s" % fields_old_array)

def prepare_comparison(filename, starting_version):
    global GlobalClassesOld
    global GlobalClassesNew
    contents_old, enums_old = parse_file2('versioning/%s_v%s.c' % (filename, starting_version))
    contents_new, enums_new = parse_file2('versioning/%s_v%s.c' % (filename, (starting_version + 1)))

    # classes
    for x in contents_old.namespace.classes:
        if hasattr(x.class_decl.typename.segments[0], 'name'):
            GlobalClassesOld[x.class_decl.typename.segments[0].name] = x
        else:
            GlobalClassesOld["__AnonymousName%s" % x.class_decl.typename.segments[0].id] = x
        for y in x.classes:
            if hasattr(y.class_decl.typename.segments[0], 'name'):
                GlobalClassesOld[y.class_decl.typename.segments[0].name] = y
            else:
                GlobalClassesOld["__AnonymousName%s" % y.class_decl.typename.segments[0].id] = y
    for x in contents_new.namespace.classes:
        if hasattr(x.class_decl.typename.segments[0], 'name'):
            GlobalClassesNew[x.class_decl.typename.segments[0].name] = x
        else:
            GlobalClassesNew["__AnonymousName%s" % x.class_decl.typename.segments[0].id] = x
        for y in x.classes:
            if hasattr(y.class_decl.typename.segments[0], 'name'):
                GlobalClassesNew[y.class_decl.typename.segments[0].name] = y
            else:
                GlobalClassesNew["__AnonymousName%s" % y.class_decl.typename.segments[0].id] = y
    # typedefs (for referals)
    for x in contents_old.namespace.typedefs:
        if hasattr(x.type, 'typename'):
            if x.type.typename.classkey != None:
                if hasattr(x.type.typename.segments[0], 'name'):
                    if x.type.typename.segments[0].name != x.name:
                        GlobalReferOld[x.name] = x.type.typename.segments[0].name
                else:
                    GlobalReferOld[x.name] = "__AnonymousName%s" % x.type.typename.segments[0].id
    for x in contents_new.namespace.typedefs:
        if hasattr(x.type, 'typename'):
            if x.type.typename.classkey != None:
                if hasattr(x.type.typename.segments[0], 'name'):
                    if x.type.typename.segments[0].name != x.name:
                        GlobalReferNew[x.name] = x.type.typename.segments[0].name
                else:
                    GlobalReferNew[x.name] = "__AnonymousName%s" % x.type.typename.segments[0].id
    return(enums_old, enums_new)

if __name__ == "__main__":
    pull_new_version()
    # use cxxheaderparser to figure out everything
    GlobalClassesOld = {}
    GlobalClassesNew = {}

    GlobalReferOld = {}
    GlobalReferNew = {}

    GlobalEnumsOld, GlobalEnumsNew = prepare_comparison('global', 0)
    prepare_comparison('pokemon_storage_system', 0) # no enum output because this file doesn't contain any

    compareFields('SaveBlock2', 1, 'gSaveBlock1Ptr')
    compareFields('SaveBlock1', 1, 'gSaveBlock2Ptr')
    compareFields('PokemonStorage', 1, 'gPokemonStoragePtr')
    # clean up if no changes
    if not globalHasChanges:
        print("No save migration needed!")
        os.remove("versioning/global_v%s.c" % globalVersion)
        os.remove("versioning/pokemon_storage_system_v%s.c" % globalVersion)
