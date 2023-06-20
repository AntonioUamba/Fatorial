#include <16f628a.h>
#fuses XT, PUT, NOWDT, NOPROTECT, NOMCLR
#use delay(clock=4000000)
#define use_portb_kbd TRUE
#define use_portb_lcd TRUE
#include <KBD.C>
#include <lcd.c>
#include <stdio.h>
void main()
{

char *matricula = "2019108399";
char i, errado, teclado;

   kbd_init();

   lcd_init();
   port_b_pullups(TRUE);
    printf(lcd_putc,  "\fMatricula: \n");

   while(TRUE)
   {
   teclado =kbd_getc();
   delay_ms(1);
   
      if(teclado!=0){
      printf(lcd_putc,"%c",teclado);
      delay_ms(200);
      
      
      if(matricula[i]!=teclado){
          errado = 1;
      }
      i++;
      }
      if(i==10 && errado==1){
      printf(lcd_putc,  "\fMATRICULA\n ERRADA");
      delay_ms(600);
      i=0;
      errado=0;
      printf(lcd_putc,  "\fMatricula: \n");
      }
      
      if(i==10 && errado==0){
      printf(lcd_putc,  "\n\fA");
      delay_ms(250);
      printf(lcd_putc,  "N");
      delay_ms(250);
      printf(lcd_putc,  "T");
      delay_ms(250);
      printf(lcd_putc,  "O");
      delay_ms(250);
      printf(lcd_putc,  "N");
      delay_ms(250);
      printf(lcd_putc,  "I");
      delay_ms(250);
      printf(lcd_putc,  "O");
      delay_ms(150);
      
      printf(lcd_putc,  "\n2019108399");
      delay_ms(200);
      i=0;
      errado=0;
      }
   }

}
