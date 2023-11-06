def uppercase(str):
    for i in str:
        lower = ord(i) >= ord('a') and ord(i) <= ord('z')
        print('{}'.format(chr(ord(i) - 32) if lower else i), end='')
    print()
