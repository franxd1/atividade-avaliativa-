#include <stdio.h>
#include <math.h>

int main(){

   int entrada;
   int resto;
   int valordiv;

   printf("\ninforme o valor da entrada:");
  scanf("%d",&entrada);

  resto = entrada % 2;
  

if (resto == 0){

 printf("\n%d eh par", entrada);
 printf("\nA soma dos algarismos de %d eh igual a %d",entrada ,valordiv);

}else{

 printf("%d eh impar\n",entrada);
 printf("A soma dos algarismos de %d eh igual a %d",entrada ,valordiv);  

}
 
 return 0;
}