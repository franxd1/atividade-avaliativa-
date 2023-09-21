#include <stdio.h>
#include <math.h>

int main(){
//questao 2
   int entrada;
   int resto;
  
   int controlador;
  

   int alg = entrada;

  scanf("%d",&entrada);

  resto = entrada % 2;
  
    while (alg > 0) {
        int digito = alg % 10; 
        controlador += digito; 
        alg /= 10; 
    }

  
if (resto == 0){

 printf("\n%d eh par", entrada);
 printf("\nA soma dos algarismos de %d eh igual a %d",entrada ,controlador);

}else{

 printf("%d eh impar\n",entrada);
 printf("A soma dos algarismos de %d eh igual a %d",entrada ,controlador);  

}
 
 return 0;
}