#include <stdio.h>
#include <math.h>

int main(){
int a= 10;
int b= 0;
int resto; 

scanf("%d", &a);
scanf("%d", &b);


if(a  > 0 && b >0){
if(a >b ){

resto= a % b; 

}else if(b > a){

  resto= b % a;   
}

}else if(a == 0 || b== 0){

    if(a == 0 ){
        resto =b * b;
   
    }else if(b == 0){
      
       resto = a * a;
    }
}


if(a == b ){
    printf("Os valores lidos sao iguais\n");

}else{
    if(resto == 0){
            if(a > b){
                printf("%d eh maior que %d\n",a ,b);
                printf("%d eh multiplo de %d\n",a ,b);    
            } else if(b > a){
                printf("%d eh maior que %d\n",b,a);
                printf("%d eh multiplo de %d\n",b,a);
            }
    }else if(resto != 0){
            if(a > b){
                printf("%d eh maior que %d\n",a ,b);
                printf("%d nao eh multiplo de %d\n",a ,b);

            } else if(b > a){ 
                printf("%d eh maior que %d\n",b , a);
                printf("%d nao eh multiplo de %d\n",b , a);
            }
        }
    }

 return 0;
}
