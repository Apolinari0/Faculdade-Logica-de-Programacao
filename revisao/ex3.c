#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Faça um Programa que leia 4 notas, mostre as notas e a média na tela.

int main(){
  int i,v[4];
  float soma=0,media=1;
srand(time(NULL));
  for(i=0;i<4;i++){
    v[i]= rand () % 11;
    soma=soma+(1.0*v[i]);
    media=soma/4;
    printf("%i ",v[i]);
  }
  printf("\n");
  printf("A média é:%.2f",media);
  return 0;
}