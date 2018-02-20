from math import sqrt

x = raw_input()
x = x.split(' ')
a = float(x[0])
b = float(x[1])
c = float(x[2])
delta = b*b - 4*a*c


if(a == 0 or delta < 0):
    print "Impossivel calcular"
else:
    x1 = (-b + sqrt(delta))/(2*a)
    x2 = (-b - sqrt(delta))/(2*a)
    print "R1 = %.5f"%x1
    print "R2 = %.5f"%x2
