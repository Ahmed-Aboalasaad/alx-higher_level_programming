#!/usr/bin/python3
def no_c(my_string):
    'removes all characters c and C from a string'

    newString = ''
    for letter in my_string:
        if (letter != 'c' and letter != 'C'):
            newString += letter
    return newString
