#!/usr/bin/python3
def divisible_by_2(my_list=[]):
    '''finds all multiples of 2 in a list.
    Returns a list with true or False values depending on
    whether the integer is a multiple of 2 or not'''
    newList = []
    for i in my_list:
        newList.append(True if i % 2 == 0 else False)
    return newList
