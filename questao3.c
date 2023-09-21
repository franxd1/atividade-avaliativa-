#include <stdio.h>

int main(){
int novasenha;
int senha;

printf("\ncrie uma senha:");
scanf("%d",&novasenha);
printf("\nsenha cadastrada:%d",novasenha);

printf("\ndigite sua senha:");
scanf("%d",&senha);

while (novasenha != senha)
{
    printf("\nsenha invalida!"); 
    printf("\ndigite sua senha:");
    scanf("%d",&senha);
}
printf("\nsenha valida!");

return 0;
}