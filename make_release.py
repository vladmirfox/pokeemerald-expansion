from pcpp import Preprocessor
from cxxheaderparser.simple import parse_file

def grab_new_version():
# preprocess global.h and store it as a file in /versioning with pcpp
    p = Preprocessor()
    path = "include/global.h"

    with open(path, 'rt') as ih:
        p.parse(ih.read(), path)
    with open('versioning/0.c', 'w') as oh:
        p.write(oh)

# use cxxheaderparser to figure out everything
contents_old = parse_file('versioning/0.c')
contents_new = parse_file('versioning/1.c')
classes_old = {}
classes_new = {}
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
            if (x == fields_old[x.name]):
                # print("%s is identical" % x.name)
                fields_old_array.remove(x.name)
            else:
                # figure out what exactly is different, starting with size
                oldsize = fields_old[x.name].type.size.tokens[0].value
                newsize = x.type.size.tokens[0].value
                if (oldsize != newsize):
                    if (oldsize < newsize):
                        print("%s was expanded in size from %s to %s" % (x.name, oldsize, newsize))
                    else:
                        print("IMPORTANT: %s was truncated in size from %s to %s" % (x.name, oldsize, newsize))

                print("%s is different!" % x.name)
                fields_old_array.remove(x.name)
        else:
            print("%s is a new field; defaulting values to zero" % x.name)

    if len(fields_old_array) > 0:
        print("The following old fields are not retained: %s" % fields_old_array)

compareFields('SaveBlock1')
compareFields('SaveBlock2')