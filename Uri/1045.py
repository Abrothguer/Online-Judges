x = raw_input().split(' ')

a = float(x[2])
b = float(x[1])
c = float(x[0])

mab = (a + b + abs(a - b))/2
mbc = (b + c + abs(b - c))/2
mac = (a + c + abs(a - c))/2
if(mab == a and mbc == b):
    x = a
    y = b
    z = c
elif(mab == b and mbc == c):
    x = c
    y = b
    z = a
elif(mac == a and mbc == c):
    x = a
    y = c
    z = b
elif(mac == c and mbc == b):
    x = b
    y = c
    z = a
elif(mab == a and mac == c):
    x = c
    y = a
    z = b
else:
    x = b
    y = a
    z = c

if (x >= (y+z)):
    print"NAO FORMA TRIANGULO"
else:
    if (x**2 == (y**2 + z**2)):
        print"TRIANGULO RETANGULO"
    elif (x**2 > (y**2 + z**2)):
        print"TRIANGULO OBTUSANGULO"
    elif (x**2 < (y**2 + z**2)):
        print"TRIANGULO ACUTANGULO"

    if (x == y and y == z):
        print"TRIANGULO EQUILATERO"
    elif (x == y or y == z or z ==
     x):
        print"TRIANGULO ISOSCELES"
