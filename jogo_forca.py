import random
from random import choice

# Lista de palavras para o jogo
palavras = ['python', 'programacao', 'desenvolvimento', 'computador', 'engenharia']

# Função para escolher uma palavra aleatória da lista
def escolher_palavra(palavras):
    palavra = random.choice(palavras)
    return palavra.upper()

# Função para jogar o jogo da forca
def jogar():
    palavra = escolher_palavra(palavras)
    letras_certas = set()
    letras_erradas = set()
    tentativas = 6
    
    # Loop principal do jogo
    while len(letras_certas) < len(set(palavra)) and tentativas > 0:
        # Imprime o estado atual da palavra
        palavra_atual = ''.join([letra if letra in letras_certas else '-' for letra in palavra])
        print(f'Palavra: {palavra_atual}')
        
        # Imprime as letras já tentadas
        tentativas_restantes = f'{tentativas} tentativas restantes'
        print(f'{tentativas_restantes} - Erradas: {" ".join(letras_erradas)}')
        
        # Solicita a próxima letra ao jogador
        letra = input('Digite uma letra: ').upper()
        
        # Verifica se a letra já foi tentada
        if letra in letras_certas or letra in letras_erradas:
            print('Você já tentou essa letra. Tente outra.')
        # Verifica se a letra está na palavra secreta
        elif letra in palavra:
            print(f'Parabéns! A letra "{letra}" está na palavra.')
            letras_certas.add(letra)
        # Se a letra não estiver na palavra secreta
        else:
            print(f'A letra "{letra}" não está na palavra.')
            letras_erradas.add(letra)
            tentativas -= 1
    
    # Fim do jogo
    if tentativas == 0:
        print(f'Você perdeu! A palavra era "{palavra}".')
    else:
        print(f'Parabéns! Você ganhou! A palavra era "{palavra}".')
        
# Início do jogo
print('Bem-vindo ao Jogo da Forca!')
jogar()