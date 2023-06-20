//Um contador que incremente sua contagem utilizando um botão .
// Se o contador for iguar a 4
#include <16f628a.h>
#use delay(clock=400000)
#fuses INTRC_IO,NOWDT,PUT,BROWNOUT,NOLVP,NOMCLR

int conta;

void main(){ 

while(true){

    if((input(pin_a0))==1){ // se o botão estiver pressionado 
       if(conta < 4){  // conta até 4, como no exemplo
     output_high(pin_b2); // acende ou liga o pino b2
     delay_ms(4000);
     output_low(pin_b2); // apaga ou desliga o pino b2
     delay_ms(4000); 
     conta ++; // adiciona mais 1 na conta 
      }
   }

 else
 output_low(pin_b2);

}
}


