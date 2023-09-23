#include <stdio.h>
#include <math.h>

int main(){
//questao 2
   int entrada;
   int resto;
  
   int controlador = 0;
  


  scanf("%d",&entrada);
   int alg = entrada;

  resto = entrada % 2;
  
    while (alg > 0) {
        int digito = alg % 10;
       
        controlador += digito;
    
        alg /= 10; 
    }

  
if (resto == 0){

 printf("%d eh par\n", entrada);
 printf("A soma dos algarismos de %d eh igual a %d\n",entrada ,controlador);

}else{

 printf("%d eh impar\n",entrada);
 printf("A soma dos algarismos de %d eh igual a %d\n",entrada ,controlador);  

}
 
 return 0;
}