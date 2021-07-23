#include <stdio.h>
#include <stdlib.h>

int main(){
   
    float num, quad;
     printf("<< Calculo do Quadrado de n >>\n");

 printf("digite um numero real:");
 scanf("%f",&num);
    quad =  num * num ;

    printf("O valor do numero ao quadrado e: %.2f", quad);

 return 0 ;
 }
/*
=> Efetuar a leitura de um número real e apresentar o resultado do quadrado desse número.

-------------------------------------------------------------------------------
Exemplo de saída: 
<< Calculo do Quadrado de n>>
Digite um número: 2.5O 
O valor de 2.5 ao quadrado é 6.25
-------------------------------------------------------------------------------
*/
