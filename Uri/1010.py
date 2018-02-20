
x = raw_input();
y = raw_input();
a = x.split(' ');
b = y.split(' ');

pag = int(a[1])*float(a[2])+int(b[1])*float(b[2])

print "VALOR A PAGAR: R$ %.2f"%pag
