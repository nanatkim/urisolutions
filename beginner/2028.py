caso = 0
while True:
    try:
        data = int(input())
    except EOFError:
        break
    caso += 1
    lista_numero = ["0"]
    if data == 0:
        print("Caso {}: 1 numero\n0".format(caso))
    else:
        for i in range(data + 1):
            for j in range(i):
                lista_numero.append(str(i))
        print("Caso {}: {} numeros\n{}".format(
            caso, len(lista_numero), " ".join(lista_numero)))
    print()
