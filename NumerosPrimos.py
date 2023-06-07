# numero primo

print(30 * "-")
numero = int(input("informe um numero para descobrir de o mesmo é primo: "))

if numero > 1:
    for x in range(2, numero):
        if(numero % x) == 0:
            print("esse nao e um numero primo")
            break
    else:
            print("esse numero e primo")
            
else:
    print("esse numero nao e primo")

print(30 * "-")