vencedores = []
partic, rodadas = map(int, input().split())
while partic != 0 and rodadas != 0:
    pessoas = list(map(int, input().split()))
    for i in range(0, rodadas):
        comando = list(map(int, input().split()))
        for j in range(comando[0] + 1, 1, -1):
            if comando[j] != comando[1]:
                pessoas.remove(pessoas[j - 2])
    vencedores = vencedores + pessoas
    pessoas = []
    partic, rodadas = map(int, input().split())

for k in range(0, len(vencedores)):
    print('Teste %i' % (k + 1))
    print(vencedores[k])
    print('')
