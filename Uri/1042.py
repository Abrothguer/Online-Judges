x = raw_input().split(' ');
a = int(x[0])
b = int(x[1])
c = int(x[2])

mab = (a + b + abs(a - b))/2;
mbc = (b + c + abs(b - c))/2;
mac = (a + c + abs(a - c))/2;

if(mab == a and mbc == b):
    print c
    print b
    print a
elif(mab == b and mbc == c):
    print a
    print b
    print c
elif(mac == a and mbc == c):
    print b
    print c
    print a
elif(mac == c and mbc == b):
    print a
    print c
    print b
elif(mab == a and mac == c):
    print b
    print a
    print c
else:
    print c
    print a
    print b

print
print a
print b
print c
