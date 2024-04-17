#!/usr/bin/python3
import sys

if __name__ != '__main__':
    sys.exit(0)

from calculator_1 import *
mapping = {'+': add, '-': sub, '*': mul, '/': div}

# input validation
if sys.argv.__len__() != 4:
    print('Usage: ./100-my_calculator.py <a> <operator> <b>')
    # print(f'Len: {sys.argv.__len__()}')
    # print(sys.argv[2])
    sys.exit(1)

x = int(sys.argv[1])
operator = sys.argv[2]
y = int(sys.argv[3])
if operator not in mapping.keys():
    print('Unknown operator. Available operators: +, -, * and /')
    sys.exit(1)

print(f'{x} {operator} {y} = {mapping[operator](x, y)}')
