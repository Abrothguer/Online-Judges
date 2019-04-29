sigma = [0]
for i in range(1, 105):
    sigma.append(sigma[i - 1] + i)

n = int(input())

comp = [0, 0, 0]
for i in range(3, 105):
    comp.append(comp[i - 1] + sum(sigma[i % 2:i - 1:2]))

print(comp[n])
