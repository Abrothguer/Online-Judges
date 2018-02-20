
x = raw_input()
z = x.split(' ')
a = float(z[0])
b = float(z[1])
c = float(z[2])

tri = a*c/2
cir = 3.14159*c*c;
tra = (a+b)*c/2.0;
qua = b*b;
ret = a*b;

print "TRIANGULO: %.3f"%tri
print "CIRCULO: %.3f"%cir
print "TRAPEZIO: %.3f"%tra
print "QUADRADO: %.3f"%qua
print "RETANGULO: %.3f"%ret
