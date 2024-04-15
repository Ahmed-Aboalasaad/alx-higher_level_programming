#!/usr/bin/python3

if __name__ == '__main__':
    import sys

    count = len(sys.argv) - 1
    print(f'{count} argument', end='')
    if count == 0:
        print('.')
    else:
        print('s:')
        for i, arg in enumerate(sys.argv[1:]):
            print(f'{i}: {arg}')
