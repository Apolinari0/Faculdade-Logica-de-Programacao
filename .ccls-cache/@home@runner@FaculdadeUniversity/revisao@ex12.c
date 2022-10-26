#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Foram anotadas as idades e alturas de 30 alunos. Faça um Programa que determine quantos alunos com mais de 13 anos possuem altura inferior à média de altura desses alunos.
int main(){
  srand(time(NULL));
  int i,idade[30],soma=0,cont=0;
  float altura[30],media=0,n=3.10;

  for(i=0;i<30;i++){
    idade[i]=rand()%19;
    altura[i]= rand() / ((float) RAND_MAX)*n+1;
    soma=soma+altura[i];
    printf("Aluno %i, idade:%i, altura:%.2f\n",i+1,idade[i],altura[i]);
  }
  media=soma/30;
  for(i=0;i<30;i++){
    if(idade[i]>=13){
    if(altura[i]<=media){
      cont++;
    }
  }
  }
  printf("\n");
  printf("%i alunos acima de 13 anos e abaixo da média(%.2f) da turma.",cont,media);
}