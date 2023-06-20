#include <Q2_Prova.h>

#include <lcd.c>                 
#DEFINE  MOTORN3   pin_b6
#DEFINE  MOTORN4   pin_b7

#DEFINE  LED_Vermelho   pin_b2
#DEFINE  LED_Amarelo   pin_b1
#DEFINE  LED_Verde   pin_b0

     
 
int main(){ 


  while (1)
  {
  
  lcd_init(); 
  
  if(input(pin_c0)==1){
  
      Output_High(MOTORN4);   
      Output_Low(MOTORN3);    
      
      Output_High(LED_Verde);    
      Output_Low(LED_Vermelho);    
      Output_Low(LED_Amarelo);     
      lcd_putc("\f   Sentido Horario\n");
      delay_ms(100);
      
  }
   
  if(input(pin_c1)==1){
  
      Output_Low(MOTORN4);   
      Output_Low(MOTORN3);    
      
      Output_Low(LED_Verde);    
      Output_High(LED_Vermelho);     
      Output_Low(LED_Amarelo);     
      lcd_putc("\f   Motor parado\n");
      delay_ms(1000);
  }
    if(input(pin_c2)==1){
  
      Output_Low(MOTORN4);   
      Output_High(MOTORN3);    
      
      Output_Low(LED_Verde);    
      Output_Low(LED_Vermelho);     
      Output_High(LED_Amarelo);     
      lcd_putc("\f   Anti Horario\n");
      delay_ms(1000);
      
  }
    }
  return 0;
}
