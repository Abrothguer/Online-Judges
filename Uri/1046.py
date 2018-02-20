x = raw_input().split(' ')
i = int(x[0])
f = int(x[1])

if i > f:
    t = 24-i+f
elif f > i:
    t = f-i
else:
    t = 24

print "O JOGO DUROU %d HORA(S)"%t
