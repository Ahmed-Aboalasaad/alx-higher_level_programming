#!/usr/bin/python3

def update_dictionary(a_dictionary, key, value):
    'replaces or adds key/value in a dictionary.'
    a_dictionary.update(dict([[key, value]]))
    return a_dictionary
