// Nessa parte temos o cabeçalho do programa 
#include <16F628A.h> // pic dado para poder fazer o projeto
#use delay(clock=4MHz) // uso do relogio 
#fuses INTRC_IO, NOWDT, PUT, BROWNOUT, NOLVP, NOMCLR // os fuses 


//nesta farte temos as definições das variaveis uma vez que seram usadas durante o programa;


#DEFINE S1_BTN PIN_B0
#DEFINE S1_RED PIN_B2
#DEFINE S1_YELLOW PIN_B3
#DEFINE S1_GREEN PIN_B4 

#DEFINE S2_BTN PIN_B1
#DEFINE S2_RED PIN_B5
#DEFINE S2_YELLOW PIN_B6
#DEFINE S2_GREEN PIN_B7

void fluxo() {
  
      output_high(S2_GREEN);
      delay_ms(1000);
      output_high(S1_RED);
       delay_ms(3000);
     
            
      output_high(S2_YELLOW);
      output_low(S2_GREEN); 
      delay_ms(5000);
      
    
      output_high(S2_RED);
      output_low(S2_YELLOW);
      
      
      output_high(S1_GREEN); 
      output_low(S1_RED);
      delay_ms(3000);
      
      
      output_high(S1_YELLOW);
      output_low(S1_GREEN);
      delay_ms(3000);
      
      output_high(S2_GREEN);
      output_low(S2_RED);
      output_high(S1_RED);
      output_low(S1_YELLOW); 
}

void offLedsS1 () {
   output_low(S1_GREEN);  
   delay_ms(30000);
   output_low(S1_YELLOW);
   delay_ms(30000);
   output_high(S1_RED);
   delay_ms(30000);
   output_high(S2_GREEN);
   delay_ms(30000);
   output_low(S1_RED);
   output_low(S2_GREEN);
}

void offLedsS2 () {
   output_low(S1_RED);
   delay_ms(10000);
   output_low(S2_GREEN);
   delay_ms(10000);
   output_low(S2_YELLOW);
   delay_ms(10000);
   output_high(S2_RED);
   delay_ms(10000);
   output_high(S1_GREEN);
   delay_ms(10000);
   output_low(S2_RED);
   output_low(S1_GREEN);
}

void main () {
     
   do{ 
      fluxo();
      if(input(S1_BTN) == 1){
         offLedsS1();
      }
       if(input(S2_BTN) == 1){
         offLedsS2();
      }
      
   }while(true);      
      
   
}




