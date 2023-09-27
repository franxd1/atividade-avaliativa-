#include <stdio.h>

int main(){
int novasenha;
int senha;

//printf("crie uma senha:\n");
scanf("%d",&novasenha);
printf("senha cadastrada: %d\n",novasenha);

//printf("digite sua senha:\n");
scanf("%d",&senha);

while (novasenha != senha)
{
    printf("senha invalida!\n"); 
   // printf("\ndigite sua senha:");
    scanf("%d",&senha);
}
printf("senha valida!\n");

return 0;
}