
from random import choice


jogador_vitorias = 0
maquina_vitoria = 0

def opicao_Jogador():
    escolha_jogador = input("Escolha Pedra , Papel ou Tesoura ")
    escolha_jogador.lower()
    if escolha_jogador == "pedra":
        return escolha_jogador
    elif escolha_jogador == "papel":
        return escolha_jogador
    elif escolha_jogador == "tesoura":
        return escolha_jogador
    else:
     print("opção inválida. Tente novamente")
    opicao_Jogador()
        
def opcao_maquina():
   esc_maquina = choice(["pedra", "papel", "tesoura"])
   return esc_maquina

while True:
    print("-"*30)
    escolha_jogador =  opicao_Jogador()
    esc_maquina = opcao_maquina()
    print("-"*30)
    
    if(escolha_jogador == "pedra") and (esc_maquina == "tesoura") \
      or (escolha_jogador =="papel") and (esc_maquina == "pedra") \
      or (escolha_jogador == "tesoura") and (esc_maquina == "papel"):
        # jogador ganha
        print(f"Jogador escolheu {escolha_jogador} e a Maquina escolheu {esc_maquina} "
            " Resultado: Você Ganhou!")
        jogador_vitorias += 1
    
    elif escolha_jogador == esc_maquina:
        #temos empate
        print(f"Jogador escolheu {escolha_jogador} e a Maquina escolheu {esc_maquina} "
            " Resultado: Empate!")
    else:
        #Maquina ganha
        print(f"Jogador escolheu {escolha_jogador} e a Maquina escolheu {esc_maquina} "
            " Resultado: Você Perdeu!")
        maquina_vitoria += 1 

    print("-"*30)
    print(f"vitoria do jogador: {jogador_vitorias}")
    print(f"vitoria de Maquina: {maquina_vitoria}") 
    print("-"*30)

  
    escolha_jogador = input("voce quer jogar novamente? ")
    
    if escolha_jogador in ["SIM", "sim", "Sim", "s", "S"]:
        pass
    elif escolha_jogador in ["NAO", "nao", "Nao", "n", "N"]:
        break
    else:
        break