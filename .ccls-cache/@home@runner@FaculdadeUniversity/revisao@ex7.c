#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
//Faça um Programa que leia um vetor de 5 números inteiros, mostre a soma, a multiplicação e os números.

int main(){
  srand(time(NULL));
  int i,vetor[5],soma=0,mult=1;

  for(i=0;i<5;i++){
    vetor[i]=rand()%11;
    printf("%i\n",vetor[i]);
    soma = soma + vetor[i];
  }
  for(i=0;i<5;i++){
    mult=mult*vetor[i];
      }
  printf("A soma é: %i\n",soma);
  printf("A multiplicação entre os números é: %i",mult);
    
 return 0; 

}