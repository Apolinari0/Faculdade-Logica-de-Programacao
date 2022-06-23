#include <stdio.h>
//imprime numeros de 1 a 20, primeiro com n1: 1, apos os 20 números em sequencia abaixo do outro, o comando executa todos os números em baixo do outro
int main(){
 int i;
  for(i=1;i<=20;i++)
    printf("N%i: %i\n",i,i);
    for(i=1;i<=20;i++)
      printf("%i ",i);
}
