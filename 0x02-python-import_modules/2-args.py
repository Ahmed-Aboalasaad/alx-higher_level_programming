#!/usr/bin/python3

if __name__ == '__main__':
    import sys

    count = len(sys.argv) - 1
    print(f'{count} argument', end='')
    if count == 0:
        print('s.')
    else:
        if count != 1:
            print('s', end='')
        print(':')
        for i, arg in enumerate(sys.argv[1:]):
            print(f'{i + 1}: {arg}')
