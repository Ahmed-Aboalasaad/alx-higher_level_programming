#!/usr/bin/python3

if __name__ == '__main__':
    # Get the defined names
    import hidden_4
    names = dir(hidden_4)
    
    # remove the names that start with __
    for name in names:
        if name[:2] != '__':
            print(name)
