#Desafio 1914 Beecrowd - De quem é a vez?
#https://www.beecrowd.com.br/judge/pt/problems/view/1914

n = int(input(4))
nome1 = ""
nome2 = ""
tp1 = ""
tp2 = ""


for i in range (0,n):
    nome1, tp1, nome2, tp2 = input().split()
    vl1, vl2 =map(int, input().split())
    soma = vl1 + vl2
    if tp1 == 'IMPAR':
    
        if soma % 2 != 0:
            print("{}".format(nome1))
        else:
            print("{}".format(nome2))
    else:
        if soma % 2 == 0:
            print("{}".format(nome1))
        else:
            print("{}".format(nome2))        
     
