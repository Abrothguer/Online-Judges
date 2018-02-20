t = int(raw_input())

while(t > 0):
  x = int(raw_input())
  x = bin(x)
  #print x
  count = 0;
  for i in x:
    if i == '1':
      count = count + 1
      
  print count
  t = t - 1;
