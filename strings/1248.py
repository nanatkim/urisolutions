n = int(input())

while n:
    n -= 1
    diet = input()
    breakfast = input()
    lunch = input()
    lunch += breakfast
    for food in range(len(lunch)):
        if lunch[food] not in diet:
            diet = 'CHEATER'
            break
        else:
            diet = diet.replace(lunch[food], '')

    if diet != 'CHEATER':
        diet = ''.join(sorted(diet))
    print(diet)
