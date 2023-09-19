#include <stdio.h>

int main(){
//questao1
 int olimpiadasVerao[28] = {1896, 1900, 1904, 1908, 1912, 1920, 1924, 1928, 1932, 1936, 1948, 1952, 1956, 1960, 1964, 1968, 1972, 1976, 1980, 1984, 1988, 1992, 1996, 2000, 2004, 2008,2012, 2016};
 int copaDoMundo[23] = {1930, 1934, 1938, 1950, 1954, 1958, 1962, 1966, 1970, 1974, 1978, 1982, 1986, 1990, 1994, 1998, 2002, 2006, 2010, 2014, 2018, 2022 };

 int ano;
 int valido = 0;
 
 scanf("%d", &ano);


    if(ano >= 1896 && ano <= 2022){
        valido = 1;
    for (int i = 0; i < 28; i++) {
            if (olimpiadasVerao[i] == ano) {
                printf("\nOs Jogos Olimpicos de Verao ocorreram no ano de %d.",ano);
              break;
            }
           else if (copaDoMundo[i] == ano); {
                printf("\nOs Jogos da copa do mundo ocorreram no ano de %d.", ano);
               break;
            }
        }
    }
    
    if(valido == 0){
        printf("\nNao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.",ano);
    }



    return 0 ;
}