#!/usr/bin/python3
def islower(c):
    '''Checks for lowercase character c

    Returns True if c is lowercase, False otherwise'''
    return (ord(c) >= ord('a') and ord(c) <= ord('z'))
