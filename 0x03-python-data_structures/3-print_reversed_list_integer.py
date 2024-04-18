#!/usr/bin/python3
def print_reversed_list_integer(my_list=[]):
    if my_list == None:
        return
    newList = my_list[:]
    newList.reverse()
    for i in newList:
        print('{:d}'.format(i))
