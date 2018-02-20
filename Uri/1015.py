from math import sqrt

a = raw_input();
b = raw_input();

a = a.split(' ')
b = b.split(' ')

x1 = float(a[0])
x2 = float(b[0])
y1 = float(a[1])
y2 = float(b[1])

dist = sqrt((x2-x1)*(x2-x1) +(y2-y1)*(y2-y1))

print "%.4f"%dist
