# Função para realizar as operações matemáticas
def calcular(num1, num2, operacao):
    if operacao == '+':
        resultado = num1 + num2
    elif operacao == '-':
        resultado = num1 - num2
    elif operacao == '*':
        resultado = num1 * num2
    elif operacao == '/':
        resultado = num1 / num2
    else:
        resultado = None
        print('Operação inválida.')
    
    return resultado

# Loop principal da calculadora
while True:
    # Solicita a operação ao usuário
    operacao = input('Digite a operação (+, -, *, /) ou "sair" para encerrar: ')
    
    # Encerra a calculadora se o usuário digitar "sair"
    if operacao.lower() == 'sair':
        break
    
    # Solicita os números ao usuário
    try:
        num1 = float(input('Digite o primeiro número: '))
        num2 = float(input('Digite o segundo número: '))
    except ValueError:
        print('Entrada inválida.')
        continue
    
    # Realiza a operação e imprime o resultado
    resultado = calcular(num1, num2, operacao)
    if resultado is not None:
        print(f'Resultado: {resultado}')