primeiro = int(input())
segundo = int(input())
terceiro = int(input())
minutos = []

total_1 = segundo*2+terceiro*4
minutos.append(total_1)

total_2 = primeiro*2+terceiro*2
minutos.append(total_2)

total_3 = primeiro*4+segundo*2
minutos.append(total_3)

print(min(minutos))
