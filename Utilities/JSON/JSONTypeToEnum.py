#!/usr/bin/env python
import json
import sys
import collections
import re

# this script takes one argument the name of a json file.
# It changes the name of the ITK enum types from the "Type" suffix to
# the "Enum" suffix.

fname = sys.argv[1]

#print "Processing ", fname

with open( fname, "r" ) as fp:
    j = json.load( fp,object_pairs_hook=collections.OrderedDict )


for m in j["members"]:
    if "enum" in m and "itk_type" in m:
        print("{0}".format(fname))
        print("\t{0}".format(m["enum"]))
        print("\t{0}".format(m["itk_type"]))
        m["itk_type"] = re.sub(r'Type$', 'Enum', m["itk_type"])
        print("\t->{0}".format(m["itk_type"]))


with open( fname, "w" ) as fp:
    json.dump( j, fp, indent=2, separators=(',',' : ') )
    print("", file=fp)
