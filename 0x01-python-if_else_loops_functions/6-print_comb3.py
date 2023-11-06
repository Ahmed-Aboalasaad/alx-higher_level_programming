#!/usr/bin/python3
for i in range(10):
    if i == 8:
        break
    for j in range(i + 1, 10):
        print('{}{}'.format(i, j), end=', ')
print('{}'.format(89))
