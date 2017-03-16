#!/usr/bin/env python
# License: Apache version 2
# (c) 2017 MyungJoo Ham <myungjoo.ham@samsung.com>
#
#############################################################
# Building Block Rule Checker                               #
#############################################################
# This does not check all rules of "RULES"
# This is a prototype with a lot of work in progress



from __future__ import print_function
import re
import os
import os.path
import sys


def ruleCheckInc(file):
    error = 0
    warning = 0

    try:
        f = open("packaging/"+file, 'r')
    except:
        warning += 1
	print("WARNING: cannot find packaging/"+file)
        return (0, 1)
    for line in f:
        # RULE 5.1
	if re.search('^\s*BuildRequires', line, re.IGNORECASE):
	    error += 1
	    print("ERROR: RULE 5.1 .inc file cannot have BuildRequires tags")
	    continue

        # Prevent: https://github.com/rpm-software-management/rpm/issues/158
	if re.search('^#.*[^%]%[^%]', line) and not re.search('^#!', line):
	    error += 1
	    print("ERROR: unless it is shebang, you must not have rpm macro in a # comment. They are expanded and multiline macro will do unexpected effects.")
	    continue

        # RULE 5.2
	if re.search('^\s*Recommends', line, re.IGNORECASE) or	\
	    re.search('^\s*Provides', line, re.IGNORECASE) or	\
	    re.search('^\s*Enhances', line, re.IGNORECASE) or	\
	    re.search('^\s*Supplements', line, re.IGNORECASE):
	    error += 1
	    print("ERROR: RULE 5.2 .inc file cannot have unsupported relations")

	# RULE 1-1
	if re.search('^\s*%package\s*-n', line, re.IGNORECASE):
	    error += 1
	    print("ERROR: RULE 1.1 to ensure 1.1, do not use -n option in package name")

	# RULE 1-3
	if re.search('^\s*%package', line) and not re.search('^\s*%package\s*(root)|(sub1)|(sub2)', line):
	    error +=1
	    print("ERROR: RULE 1.3 the send prefix should be root, sub1, or sub2.")

	    

    f.close()
    


    return (error, warning)


def main():
    dirs = os.listdir("packaging/")
    error = 0
    warning = 0

    # iterate in the list of ./packaging/
    for file in dirs:
        if re.search('\.inc', file):
	    result = ruleCheckInc(file)
	    error += result[0]
	    warning += result[1]

    print('Error: '+str(error))
    print('Warning: '+str(warning))

    return error

retval = main()
sys.exit(retval)

