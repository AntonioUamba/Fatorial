# calculo de fatoriual 
numero = int(input("insira um numero: "))

fatorial = 1 

if numero < 0:
    print("nao existe fatorial de numertos negativos")
elif numero == 0:
    print(f"o fatorial de {numero} eh 1")
else:
    for x in range(1, numero+1):
        fatorial = fatorial*x
    print(f"o fatorial de {numero} eh: {fatorial}")
    
    