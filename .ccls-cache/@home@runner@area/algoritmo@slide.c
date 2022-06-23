#include <stdio.h>

int main(){
  int n,i,vetorR[10],vetorS[10],soma=0,vetorX[20],y[10];
  for(i=0;i<10;i++){
    printf("R: ");
    scanf("%i",&vetorR[i]);
     soma+=vetorR[i];
  }
  printf("\n");
  for(i=0;i<10;i++){
    printf("S: ");
    scanf("%i",&vetorS[i]);
    soma+=vetorS[i];
    }
  for(i=0;i<=10;i++){
    vetorX[i]=vetorR[i];
  }
  for(i=0;i<=10;i++){
    vetorX[i+10]=vetorS[i];
  }
  printf("A junção dos números é: ");
  for(i=0;i< 20;i++){
    printf("%i,",vetorX[i]);
  }
  printf("A soma é: %i\n",soma);
  printf("A multplicação dos vetores são: ");
  for(i=0;i<10;i++){
    y[i]=vetorS[i]*vetorR[i];
    printf("%i, ",y[i]);
  }
  return 0;
  }

  