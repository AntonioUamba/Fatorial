#include <stdio.h>
#include <string.h>
#include <math.h>
float system(float x=0);
float y=0;
 
    if(x<1){
 	y=(4-(x*x));  }

 else{
 	if(x=1){ y=2;
	 }
	 else {
	 	if(x>1){
	 		y=2+x*x;
		 }
	 }
	 return (y);
 }
 

 
 int main(){
 	
 	float F, x;
 	printf("escreve o valor de x:\n");
 	scanf("%f",&x);
 	
 	
 /*	if(x>1){
 	
	 F=(2+(x*x));	
	 }
	 else{
	 	if(x<1){
	 		F=(4-(x*x));
		 }
	 }
	// else{
	// f=x*2;
		 }
	 	
//	 }*/
 	
 	//F=sistem(x);
 printf("o valor de F=%f", F);
 	
 	
 	
 	
 	
 	
return 0;
 }
