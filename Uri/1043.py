x = raw_input().split(' ')
a = float(x[0])
b = float(x[1])
c = float(x[2])

if ((abs(a-b)) < c and c < (a + b)):
    p = a+b+c
    print "Perimetro = %.1f"%p
else:
    ar = (a+b)*c/2
    print "Area = %.1f"%ar
