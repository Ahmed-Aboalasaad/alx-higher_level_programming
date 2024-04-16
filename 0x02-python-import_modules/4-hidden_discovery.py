#!/usr/bin/python3

if __name__ == '__main__':
    import hidden_4
    names = dir(hidden_4)[8:]
    for name in names:
        print(name)
