x = raw_input();
x = x.split(' ');
a = int(x[0])
b = int(x[1])

if a == 1:
    i = 4.0*b
    print "Total: R$ %.2f"%i
elif a == 2:
    i = 4.5*b
    print "Total: R$ %.2f"%i
elif a == 3:
    i = 5.0*b
    print "Total: R$ %.2f"%i
elif a == 4:
    i = 2.0*b
    print "Total: R$ %.2f"%i
elif a == 5:
    i = 1.5*b
    print "Total: R$ %.2f"%i
