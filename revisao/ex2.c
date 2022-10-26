#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Faça um Programa que leia um vetor de 10 números reais e mostre-os na ordem inversa.

int main(){
  int i,v[10];
  
 srand(time(NULL));
 for(i=0;i<10;i++){
    v[i] = rand () % 100;
    printf("%i,",v[i]);
  }
 printf("\n");
 for(i=9;i>=0;i--){
    printf("%i,",v[i]);
  }
  return 0;
}