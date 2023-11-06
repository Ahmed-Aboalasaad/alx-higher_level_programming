#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
if number > -1:
    last = number % 10
else:
    last = (number % 10) - 10
print(f'Last digit of {number} is {last}', end='')
if last > 5:
    print(' and is graeter than 5')
elif last == 0:
    print(' and is 0')
elif last < 6:
    print(' and is less than 6 and not 0')
else:
    print()
