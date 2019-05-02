def strtoint(word):
    integer = ''
    list_int = '1234567890'
    check = 0
    for leter in word:
        if leter in list_int:
            integer += leter
        else:
            if leter == 'l':
                integer += '1'
            elif leter == 'o' or leter == 'O':
                integer += '0'
            elif leter != ',' and leter != ' ':
                check = 1
                break

    try:
        integer = int(integer)
        if integer > 2147483647:
            check = 1
    except ValueError:
        integer = 'error'

    if check:
        integer = 'error'

    return integer


while True:
    try:
        sentence = input()
        sentence = strtoint(sentence)
        print(sentence)
    except EOFError:
        break
