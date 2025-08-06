id = 1
soma = 0
q_id = 0
while id > 0:
    id = int (input("digite uma idade"))
    if id<=0:
        print ("")
    else:
        soma += id
        q_id +=1
media = soma//q_id 
print (media)
