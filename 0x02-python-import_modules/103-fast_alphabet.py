#!/usr/bin/python3
from functools import reduce
print(reduce(lambda x, y: x + y, list(map(chr, range(65, 91)))))
