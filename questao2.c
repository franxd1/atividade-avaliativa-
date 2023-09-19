#include <stdio.h>
#include <math.h>

int main(){

   int entrada;
   int h;
   int g;
   int r;
   scanf("%d",&entrada);
// pega o resto 

r=0;
  h = entrada % 2;
  g = entrada / 2;
 if (h == 0){
   
    printf("\n %d eh par",entrada);
    printf("\n A soma dos algarismos de %d eh igual a %d ",entrada , h );
    r=1;
  
 }
 if (h == 1);{
     
    printf("\n %d eh impar",entrada);
    printf("\n soma dos algarismos de %d eh igual a %d",entrada);
   
 }
 return 0;
}