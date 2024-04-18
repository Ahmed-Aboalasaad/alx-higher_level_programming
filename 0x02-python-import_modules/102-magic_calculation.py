#!/usr/bin/python3

from magic_calculation_102 import add, sub

# def magic_calculation(a, b):
#     if a < b:
#         c = a + b

#     else:
#         return a - b


def magic_calculation(a, b):
    if a < b:
        for i in range(4):
            a = add(a, a)
        return a
    elif a >= b:
        return sub(a, b)
    else:
        return None
