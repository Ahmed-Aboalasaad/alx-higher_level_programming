#!/usr/bin/python3

def simple_delete(a_dictionary, key=""):
    'deletes a key in a dictionary.'
    if (key is "") or (key not in a_dictionary.keys()):
        return a_dictionary

    del a_dictionary[key]
    return a_dictionary
