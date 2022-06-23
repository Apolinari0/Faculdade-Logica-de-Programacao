#include <stdio.h>

int verificaNumero(int n){
  if(n>999)
    return 1;
  else
    return 0;
}

int verificaCentenas(int n){
  return n/100;
}

int verificaDezenas(int n){
  return (n-(verificaCentenas(n)*100))/10;
}

int verificaUnidades(int n){
  return n-(verificaCentenas(n)*100) - (verificaDezenas(n)*10);
}

int main(){
  int n;
  printf("N: ");
  scanf("%i",&n);
  if(verificaNumero(n)==1)
    printf("Número inválido.(apenas número menores que 1000)");
   else
  printf("%i = %i Centenas, %i dezenas, %i unidades.\n",n,verificaCentenas(n),verificaDezenas(n),verificaUnidades(n));
  return 0;
}