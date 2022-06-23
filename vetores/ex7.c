#include <stdio.h>

int main(){
  int i,v[5]={0},soma=0,mult=1;
  for(i=0;i<5;i++){
    printf("Digite um número: ");
    scanf("%i",&v[i]);
    soma+=v[i];
    mult*=v[i];
    }
  printf("Os números digitados: ");
  for(i=0;i<5;i++){
    printf("%i,",v[i]);
  }
  printf("\nSoma é: %i",soma);
  printf("\nMultiplicação é: %i",mult);
}