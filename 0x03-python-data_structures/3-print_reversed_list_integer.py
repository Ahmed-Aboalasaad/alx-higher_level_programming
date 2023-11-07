#!/usr/bin/python3
def print_reversed_list_integer(my_list=[]):
    newList = []
    for i in my_list:
        newList.insert(0, i)
    for i in newList:
        print('{}'.format(i))
