while True:

    prob = [0] * 26
    dorm = [0] * 26
    total = 0
    point = 0

    n = int(input())
    if not n:
        break

    while n:
        n -= 1
        p, t, j = input().split()
        pos = ord(p) - 65

        if j == 'correct':
            total += 1
            point += int(t)
            prob[pos] = 1
        if j == 'incorrect':
            dorm[pos] += 20

    for pos in range(len(prob)):
        if prob[pos]:
            point += dorm[pos]

    print(total, point)
