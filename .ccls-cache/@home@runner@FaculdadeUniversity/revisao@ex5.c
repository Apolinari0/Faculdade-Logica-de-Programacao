#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Faça um Programa que leia 20 números inteiros e armazene-os num vetor. Armazene os números pares no vetor PAR e os números IMPARES no vetor impar. Imprima os três vetores.

int main(){
  int i,a[20],p[20],im[20],contp=0,conti=0;
  
  srand(time(NULL));
  
  printf("Números:");
  for(i=0;i<20;i++){
  a[i]= rand () % 101;
  if(a[i]%2==0){
   p[contp]=a[i];
    contp++;
    }
  else{
    im[conti]=a[i];
    conti++;
  }
    printf("%i,",a[i]);
    }
  printf("\n");
  printf("Números pares:");
  for(i=0;i<contp;i++){
    printf("%i,",p[i]);
  }
  printf("\n");
  printf("Números ímpares:");
  for(i=0;i<conti;i++){
  printf(",%i",im[i]);
    }
    return 0;
  }