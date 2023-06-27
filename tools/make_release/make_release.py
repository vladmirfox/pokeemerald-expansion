# pcpp contains the C Preprocessor/Evaluator that allows the script to go through includes etc
from pcpp import Preprocessor, Evaluator, OutputDirective, Action
# cxxheaderparser effectively goes through the C file and processes it, allowing the Python script to read it
from cxxheaderparser.simple import parse_file
# os and sys for interaction with the file system
import os
import sys

# trusted_typedefs clarifies that the underlying construction doesn't need to be compared (unlike say two instances of a BoxPokemon struct) 
trusted_typedefs = {
    'u8': [0, pow(2, 8) - 1],
    'u16': [0, pow(2, 16) - 1],
    'u32': [0, pow(2, 32) - 1],
    'u64': [0, pow(2, 64) - 1],
    's8': [-(pow(2, 7) - 1), pow(2, 7) - 1],
    's16': [-(pow(2, 15) - 1), pow(2, 15) - 1],
    's32': [-(pow(2, 31) - 1), pow(2, 31) - 1],
    's64': [-(pow(2, 63) - 1), pow(2, 63) - 1],
    'bool8': [0, 1],
    'bool16': [0, 1],
    'bool32': [0, 1],
    'int': [0, 0]
}
# ignoreable includes prevents the preprocessor from complaining about include files that don't exist that we don't need anyway
ignoreable_includes = ['string.h', 'stddef.h', 'stdint.h', 'sprite.h', 'limits.h']

globalVersion = 0
globalHasChanges = False

# this class overrides the "include not found" error and prevents it from displaying if it is in ignoreable_includes (i.e. irrelevant)
class PcppPreprocessor(Preprocessor):
    def on_include_not_found(self,is_malformed,is_system_include,curdir,includepath):
        if includepath not in ignoreable_includes:
            if is_malformed:
                self.on_error(self.lastdirective.source,self.lastdirective.lineno, "Malformed #include statement: %s" % includepath)
            else:
                self.on_error(self.lastdirective.source,self.lastdirective.lineno, "Include file '%s' not found" % includepath)
        raise OutputDirective(Action.IgnoreAndPassThrough)

# preprocess a file and store it as files in /versioning with pcpp
def preprocess_files(filename, version):
    p = PcppPreprocessor()
    path = "include/%s.h" % filename
    with open(path, 'rt') as ih:
        p.parse(ih.read(), path)
    with open('versioning/%s_v%s.c' % (filename, version), 'w') as oh:
        p.write(oh)

# pulls global.h and pokemon_storage_system from the source, storing them in a separate versioning folder
def pull_new_version():
    if not os.path.exists("versioning/"):
        os.mkdir("versioning/")
    global globalVersion
    while os.path.exists("versioning/global_v%s.c" % globalVersion):
        globalVersion += 1
    preprocess_files("global", globalVersion)
    preprocess_files("pokemon_storage_system", globalVersion)
    if (globalVersion == 0):
        injectTustin()
        quit()

# injects Tustin's implementation to the game where necessary
def injectTustin():
    out("Saved the current version as v0. Please wait…")
    # add save sentinel to the new saveblock
    with open("include/global.h", 'r') as file:
        content = file.read()
    if not 'u8 _saveSentinel;' in content:
        ncontent = content.replace('struct SaveBlock2\n{\n    ', 'struct SaveBlock2\n{\n    u8 _saveSentinel; // 0xFF\n    // u8 unused;\n    u16 saveVersion;\n    ')
        if ncontent == content: # the injection failed for whatever reason
            failTustinInjection("Unable to inject the necessary data into SaveBlock2! Aborting procedure.")
        with open("include/global.h", 'w') as file:
            file.write(ncontent)
        out("Updated include/global.h")
    # add new game defining
    with open("src/new_game.c", 'r') as file:
        content = file.read()
    if not 'gSaveBlock2Ptr->_saveSentinel = 0xFF;' in content:
        ncontent = content.replace('gSaveBlock2Ptr->encryptionKey = 0;', 'gSaveBlock2Ptr->_saveSentinel = 0xFF;\n    gSaveBlock2Ptr->saveVersion = SAVE_VERSION;\n    gSaveBlock2Ptr->encryptionKey = 0;')
        if ncontent == content: # the injection failed for whatever reason
            failTustinInjection("Unable to inject the necessary data into new_game.c! Aborting procedure.")
        with open("src/new_game.c", 'w') as file:
            file.write(ncontent)
        out("Updated src/new_game.c")
    # uncomment the versioning include in include/constants/global.h
    with open("include/constants/global.h", 'r') as file:
        content = file.read()
    if '//#include "constants/versioning.h"' in content:
        content = content.replace('//#include "constants/versioning.h"', '#include "constants/versioning.h"')
        with open("include/constants/global.h", 'w') as file:
            file.write(content)
        out("Updated include/constants/global.h")
    makeSaveVersionConstants()

def failTustinInjection(msg):
    out(msg)
    # remove the latest versioning backups
    os.remove("versioning/global_v%s.c" % globalVersion)
    os.remove("versioning/pokemon_storage_system_v%s.c" % globalVersion)
    quit()

# the following function defines all the save versions constants
def makeSaveVersionConstants():
    content = "#ifndef GUARD_CONSTANTS_VERSIONING_H\n#define GUARD_CONSTANTS_VERSIONING_H\n\n"
    for x in range(globalVersion + 1):
        content += "#define SAVE_VERSION_%s %s\n" % (x, x)
    content += "\n#define SAVE_VERSION (SAVE_VERSION_%s)\n\n#endif // GUARD_CONSTANTS_VERSIONING_H\n" % globalVersion
    # write to file
    with open("include/constants/versioning.h", 'w') as file:
        file.write(content)
    out("Updated include/constants/versioning.h")

# alternative of plain old "print" that allows for logging
def out(str):
    print(str)
    if '--log' in sys.argv:
        f.write(str + '\n')

# a hacky solution that replaces enums with their actual values, allowing the Evaluator to deal with it
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
            out("WARNING: Unable to resolve %s%s" % (fieldname, extratext_display))
            return
    # make list of fields
    fields_old = {}
    fields_old_array = []
    for x in GlobalClassesOld[fieldname].fields:
        fields_old[x.name] = x
        fields_old_array.append(x.name)

    # compare
    if '--verbose' in sys.argv or '--detailed' in sys.argv or (inline == 1):
        out("  " * (inline - 1) + "Comparing %s%s" % (fieldname, extratext_display))
    for x in GlobalClassesNew[fieldname].fields:
        oldclass = parse_field(fields_old[x.name], GlobalEnumsOld)
        newclass = parse_field(x, GlobalEnumsNew)

        if (x.name in fields_old_array):
            fields_old_array.remove(x.name)
            if (x == fields_old[x.name]):
                if '--verbose' in sys.argv:
                    out("  " * inline + "%s is identical" % x.name)
                # if identical, check the actual kind to make sure the underlying struct didn't change
                if newclass['kind'] not in trusted_typedefs.keys():
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
                        out("  " * inline + "%s was expanded in size from %s to %s" % (x.name, oldsize, newsize))
                    else:
                        out("  " * inline + "IMPORTANT: %s was truncated in size from %s to %s" % (x.name, oldsize, newsize))
                    continue
            out("  " * inline + "%s is different, but can't identify why!" % x.name)
        else:
            out("  " * inline + "%s is a new field; defaulting values to zero" % x.name)

    if len(fields_old_array) > 0:
        out("  " * inline + "The following old fields are not retained: %s" % fields_old_array)

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
    if '--log' in sys.argv:
        f = open('log.txt', 'w')
    
    pull_new_version()
    # use cxxheaderparser to figure out everything
    GlobalClassesOld = {}
    GlobalClassesNew = {}

    GlobalReferOld = {}
    GlobalReferNew = {}

    # for now, this will only take care of migrations from version x - 1 to version x
    # in the future, this can be improved to allow direct migrations from one version to another, but for now this iterative approach will work (albeit more slowly)
    GlobalEnumsOld, GlobalEnumsNew = prepare_comparison('global', globalVersion - 1)
    prepare_comparison('pokemon_storage_system', globalVersion - 1) # no enum output because this file doesn't contain any

    compareFields('SaveBlock1', 1, 'gSaveBlock1Ptr')
    compareFields('SaveBlock2', 1, 'gSaveBlock2Ptr')
    compareFields('PokemonStorage', 1, 'gPokemonStoragePtr')
    # clean up if no changes
    if not globalHasChanges:
        out("No save migration needed!")
        os.remove("versioning/global_v%s.c" % globalVersion)
        os.remove("versioning/pokemon_storage_system_v%s.c" % globalVersion)

    if '--log' in sys.argv:
        f.close()
