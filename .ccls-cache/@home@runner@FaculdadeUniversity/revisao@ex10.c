#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// /Faça um Programa que leia dois vetores com 10 elementos cada. Gere um terceiro vetor de 20 elementos, cujos valores deverão ser compostos pelos elementos intercalados dos dois outros vetores.
int main(){
  srand(time(NULL));
  int i,va[10],vb[10],vbb[10],vc[30];
printf("Vetor A: \n");
  for(i=0;i<10;i++){
    va[i]=rand()%100;
    printf("%i \t",va[i]);
  }
  printf("\n");
  printf("Vetor B: \n");
  for(i=0;i<10;i++){
    vb[i]=rand()%100;
    printf("%i \t",vb[i]);
  }
   printf("\n");
  printf("Vetor C: \n");
  for(i=0;i<10;i++){
    vbb[i]=rand()%100;
    printf("%i \t",vbb[i]);
  }
   for(i=0;i<30;i+=3){
    vc[i] = va[i/3];
    vc[i+1] = vb[i/3];
    vc[i+2] = vbb[i/3];
  }
    printf("\n");
  printf("Vetor D: \n");
  for(i=0;i<30;i++){
    printf("%i \t",vc[i]);
  }
  return 0;
}
