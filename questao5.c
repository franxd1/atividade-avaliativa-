#include <stdio.h>
#include <math.h>

int main(){
int a;
int b;
int resto; 

scanf("%d", &a);
scanf("%d", &b);

resto= a % b; 

if(a == b ){
    printf("Os valores lidos sao iguais\n");

}else{
    if(resto == 0){
            if(a > b){
                printf("%d eh maior que %d\n",a ,b);
                printf("%d  eh multiplo de %d\n",a ,b);    
            } else if(b > a){
                printf("%d eh maior que %d\n",b,a);
                printf("%d  eh multiplo de %d\n",b,a);
            }
    }else{
            if(a > b){
                printf("%d eh maior que %d\n",a ,b);
                printf("%d  nao eh multiplo %d\n",a ,b);

            } else if(b > a){ 
                printf("%d eh maior que %d\n",b , a);
                printf("%d  nao eh multiplo %d\n",b , a);
            }
        }
    }

 return 0;
}