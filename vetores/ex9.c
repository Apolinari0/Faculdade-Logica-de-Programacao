#include <stdio.h>

int main(){
  int i,v[10],quad=1,soma=0;
  for(i=0;i<10;i++){
    printf("Digite um número: ");
    scanf("%i",&v[i]);
    quad=v[i]*v[i];
    soma+=quad;
  }
  printf("Soma é: %i",soma);
  return 0;
}