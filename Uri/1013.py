
x = raw_input()
y = x.split(' ')

a = int(y[0])
b = int(y[1])
c = int(y[2])

m = (a+b+abs(a-b))/2
m2 = (m+c+abs(m-c))/2

print m2,"eh o maior"
