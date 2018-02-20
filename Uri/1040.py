x = raw_input()
x = x.split(' ')
n1 = float(x[0])
n2 = float(x[1])
n3 = float(x[2])
n4 = float(x[3])

med = (n1*2 + n2*3 + n3*4 + n4)/10
print"Media: %.1f"%med

if med >= 7:
    print"Aluno aprovado."
elif med < 5:
    print"Aluno reprovado."
else:
    print"Aluno em exame."
    x = float(raw_input())
    print"Nota do exame: %.1f"%x
    med = (med+x)/2
    if med >= 5:
        print"Aluno aprovado."
    else:
        print"Aluno reprovado."
    print"Media final: %.1f"%med
