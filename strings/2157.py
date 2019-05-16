loops = int(input())
for i in range(loops):
    data = input().split()
    final = ""
    for j in range(int(data[0]), int(data[1]) + 1):
        final += str(j)
    for k in range(int(data[1]), int(data[0]) - 1, - 1):
        final += str(k)[::-1]
    print(final)
