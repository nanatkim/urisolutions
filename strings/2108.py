maior = 0
maior_palavra = ""
while True:
    data = input().split()
    tamanho = []
    if data[0] == "0":
        break
    for i in data:
        tamanho.append(len(i))
        if len(i) >= maior:
            maior = len(i)
            maior_palavra = i
    print("-".join(map(str, tamanho)))
print()
print("The biggest word:", maior_palavra)
