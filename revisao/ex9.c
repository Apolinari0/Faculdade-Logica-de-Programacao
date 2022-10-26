#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Faça um Programa que leia um vetor A com 10 números inteiros, calcule e mostre a soma dos quadrados dos elementos do vetor.
int main(){
  srand(time(NULL));
  int i,a[10], soma=0,quad=0;

  for(i=0;i<10;i++){
    a[i]=rand()%11;
    quad= a[i]*a[i];
    soma+=quad;
  }
  printf("Números:\n");
  for(i=0;i<10;i++){
    printf("%i \n",a[i]);
  }
  printf("A soma dos quadrados dos elementos do vetor é: %i",soma);
  return 0;
}