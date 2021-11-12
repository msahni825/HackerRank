#!/bin/python3

import math
import os
import random
import re
import sys


#
# Complete the 'missingCharacters' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def missingCharacters(s):
    # Write your code here
    result = ""
    d_list = []
    c_list = []
    final_dlist = []
    digits_list = [0,1,2,3,4,5,6,7,8,9]
    chars_list = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
    digit_list = []
    char_list = []
    for ch in s:
        if ch.isdigit():
            digit_list.append(ch)
        else:
            char_list.append(ch)
    digit_list.sort()
    char_list.sort()
    d_list = list(set(digit_list) - set(digits_list))
    c_list = list(set(chars_list) - set(char_list)) + list(set(char_list) - set(chars_list))
    d_list.sort()
    c_list.sort()
    for item in d_list:
        final_dlist.append(9-int(item))
    final_dlist.sort()
    if final_dlist and c_list:
        for j in final_dlist:
            result = result + str(j) 
        for i in c_list:
            result = result + i
    elif c_list:
        for i in c_list:
            result = result + i
    elif final_dlist:
        for j in final_dlist:
            result = result + str(j)   
    return result
if __name__ == '__main__':
