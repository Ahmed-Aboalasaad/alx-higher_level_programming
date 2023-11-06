#!/usr/bin/python3
def print_last_digit(number):
    'prints the last digit of a number and returns it'
    last = 10 - (number % 10) if number < 0 else number % 10
    print(f'{last}', end='')
    return last
