#include<16f628a.h>
#fuses xt,put,nowdt,noprotect,nomclr
#use delay(internal=4Mhz)
#use standard_io(b)
#use standard_io(a)

// Questão 9

int display[10]={0b0000001, 0b1001111, 0b0010010, 0b0000110, 0b1001100, 0b0100100, 0b0100000, 0b0001111, 0b000000, 0b0000100};

void main() 

{
 int unidade = 0;
 int dezena = 0;
 int tempo = 5;
 output_b(0b00000000);
 
 
 while (true){
   
   
   if (input(pin_a2)== 1 || input(pin_a3)== 1 || input(pin_a4)== 1)
   {
    output_a(0b10);
    output_b(display[unidade]);
    delay_ms(tempo);
    output_a(0b01);
    output_b(display[dezena]);
    delay_ms(tempo);
   }
   else
   {
    delay_ms(5);
    output_a(0b10);
    output_b(display[unidade]);
    delay_ms(tempo);
    output_a(0b01);
    output_b(display[dezena]);
    delay_ms(tempo);
    
      if (input(pin_a2)==1)
      {
       unidade++;
       if (unidade>9)
       {
       dezena++;
       unidade=0;
       }
       
       if(dezena>9)
       {
       dezena=0;
       unidade=0;
       }
       
      }    
   }   
 }
}
  

      
       
    
   
   
 




