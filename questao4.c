#include <stdio.h>
#include <math.h>

int main(){
  double salario;
  char call;
  double sfim;
  
  //printf ("classe:");
  scanf("%c",&call); 
  
 // printf ("R$\n");
  scanf("%lf",&salario);
   //printf ("%.0f",salario);
  
   switch (call){
      case 'a':
      
       sfim =  (5 * salario) /100 + salario;
       break;
       
      case 'b' :
       sfim =  (7 * salario) /100 + salario;
       break;
       
      case 'c':
        sfim =  (8 * salario) /100 + salario;
        break;
   }
     printf ("R$ %0.2f",sfim);
  
 return 0;
}