#include <stdio.h>
#include <math.h>
#include <conio.h>


int main (){
	
	float a, b, c, D, x1,x2;

	
	   printf("digita o valor de a:\t");
	   scanf("%f", &a); 
	   printf("digita o valor de b:\t");
	   scanf("%f", &b); 
	   printf("digita o valor de c:\t");
	   scanf("%f", &c); 

          D=b*b-4*a*c;
  if(D>=0){
  
  	x1=((-b)+sqrt(D)/(2*a));
  	x1=((-b)-sqrt(D)/(2*a));
  	printf("O resultado da equacao e %.2f\n  e %.2f\n", x1, x2); 
  }
else{
	if(D<0){

		printf("nao exite raizes reais\n");
			}
}




return 0;	   
}
