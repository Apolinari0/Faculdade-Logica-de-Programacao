#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main(){
  
//Faça um Programa que leia um vetor de 5 números inteiros e mostre-os.
int i,vetor[5];

srand(time(NULL));

for(i=0;i<5;i++){
  vetor[i] = rand () %100;
  printf("%i,",vetor[i]);
 }
return 0;
}