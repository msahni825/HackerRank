#!/bin/python3

import math
import os
import random
import re
import sys



#
# Complete the 'transformSentence' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING sentence as parameter.
#

def transformSentence(sentence):
    # Write your code here
    result = ""
    for i in sentence:
        # j = i+1
        if i == "":
            result = result + ""
        elif ord(i) >= ord(i):
            if i.upper():
                result = result + i.lower()
            else:
                result = result + i.upper()
    return result
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    sentence = input()

    result = transformSentence(sentence)

    fptr.write(result + '\n')

    fptr.close()
