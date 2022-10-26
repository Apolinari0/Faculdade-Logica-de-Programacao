#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Faça um Programa que peça a idade e a altura de 5 pessoas, armazene cada informação no seu respectivo vetor. Imprima a idade e a altura na ordem inversa a ordem lida.
int main(){
  srand(time(NULL));
  int i,idade[5];
  float altura[5];

  for(i=0;i<5;i++){
    idade[i]=rand()%50;
    altura[i]=rand()%2*1.0;
  }
  for(i=4;i>=0;i--){
   printf("Pessoa %i , idade: %i altura:%.2f\n",i+1,idade[i],altura[i]);
  }
  
  return 0;
  
  
}