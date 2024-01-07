#!/usr/bin/python
def delete_at(my_list=[], idx=0):
    '''deletes the item at a specific position in a list.'''
    if (idx < 0 or idx > len(my_list) - 1):
        return my_list
    newList = []
    for i in range(0, len(my_list)):
        if i != idx:
            newList.append(my_list[i])
    my_list = newList
    return newList
