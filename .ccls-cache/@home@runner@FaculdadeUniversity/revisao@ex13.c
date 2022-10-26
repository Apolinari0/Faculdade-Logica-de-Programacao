#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Faça um programa que receba a temperatura média de cada mês do ano e armazene-as em uma lista. Após isto, calcule a média anual das temperaturas e mostre todas as temperaturas acima da média anual, e em que mês elas ocorreram (mostrar o mês por extenso: 1 – Janeiro, 2 – Fevereiro, . . . ).
int imprimeMes(int i){
  switch(i){
   case 1:
    printf("Janeiro");
    break;
  case 2:
    printf("Fevereiro");
    break;
  case 3:
    printf("Março");
    break;
  case 4:
    printf("Abril");
    break;
  case 5:
    printf("Maio");
    break;
  case 6:
    printf("Junho");
  case 7:
    printf("Julho");
    break;
  case 8:
      printf("Agosto");
      break;
  case 9:
      printf("Setembro");
      break;
  case 10:
      printf("Outubro");
      break;
  case 11:
      printf("Novembro");
      break;
  case 12:
      printf("Dezembro");
      break;
  default:
      break;
  }
    }
int main(){
  int i;
  float temp[12],media=0,n=40.0,soma=0;

  srand(time(NULL));
  for(i=0;i<12;i++){
    imprimeMes(i+1);
    temp[i]=rand()/(float)RAND_MAX * n;
    printf("\nTemperatura: %.2f\n",temp[i]);
    soma=soma+temp[i];  
  }
  media=soma/12;
  printf("\nMedia: %.2f\n",media);
  printf("\n Meses com temperatura acima da média:\n");
  for(i=0;i<12;i++){
    if(temp[i]>media){
      printf("\n%i - ",i+1);
      imprimeMes(i+1);
      printf(",Temperatura: %.2f\n",temp[i]);
    }
  }
return 0;
  }
