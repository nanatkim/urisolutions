while True:
    vogais_a = input()
    if vogais_a == "":
        break
    frase = input()
    conta = 0
    for i in frase:
        if i in vogais_a:
            conta += 1
    print(conta)
