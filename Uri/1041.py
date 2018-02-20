x = raw_input().split(' ')
a = float(x[0])
b = float(x[1])

if (a == 0 and b == 0):
    print"Origem"
elif a == 0:
    print"Eixo Y"
elif b == 0:
    print"Eixo X"
elif (a > 0 and b > 0):
    print"Q1"
elif (a < 0 and b < 0):
    print"Q3"
elif (a > 0 and b < 0):
    print"Q4"
elif (a < 0 and b > 0):
    print"Q2"
