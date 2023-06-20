#include <stdio.h>
#include <string.h>

int main(){
	
	
	char nome[50];
	float salario, imposto;
	
	
	  printf("informe o nome:\n");
	  scanf("%s", nome);
	  printf("digite o salario:\n");
	   scanf("%f", &salario);
	   
	imposto =0;
	
	  if(salario<=1500){
	  	printf("esta isento do imposto\n");
	  }
	  else{
	  	if(salario>1500 || salario<=2500){
	  		imposto =salario*15/100;
	  		printf("o imposto =%f", imposto);
		  }

	  else{
	  	if(salario>2500 || salario<=400){
	  		imposto=salario*25/100;  }
	
	  else{
	  	if(salario>400){
	  		imposto=salario*40/100;
		  }
	 
	  
	  	   }
	  	   	
	  }
	
		  }

	
	return 0;
}
