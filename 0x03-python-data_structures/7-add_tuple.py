#!/usr/bin/python3
def add_tuple(tuple_a=(), tuple_b=()):
    '''returns a tuple with 2 integers:
    The addition of the first element of each argument,
    and the addition of the second element of each argument'''
    first_a = 0 if len(tuple_a) < 1 else tuple_a[0]
    first_b = 0 if len(tuple_b) < 1 else tuple_b[0]
    second_a = 0 if len(tuple_a) < 2 else tuple_a[1]
    second_b = 0 if len(tuple_b) < 2 else tuple_b[1]
    return (first_a + first_b, second_a + second_b)
