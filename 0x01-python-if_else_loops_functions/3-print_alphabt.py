#!/usr/bin/python3

for i in range(97, 123):
    number = 0 if (chr(i) == 'q' or chr(i) == 'e') else i
    print('{}'.format(chr(number)), end='')
