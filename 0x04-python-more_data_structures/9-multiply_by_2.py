#!/usr/bin/python3

def multiply_by_2(a_dictionary):
    'returns a new dictionary with all values multiplied by 2'
    doubled_values = [x * 2 for x in list(a_dictionary.values())]
    new_dict = dict(zip(a_dictionary.keys(), doubled_values))
    return new_dict
