#include <stdio.h>

int main(){
  int i=0,media=0,vetor[100000],cont=0,n,t;
  float soma=0;

  printf("Insira notas com valores diferentes de -1.N1: ");
  scanf("%i",&vetor[0]);
  n=vetor[i];
  do{
    switch(n){
      case -1:
      break;
      default:
      i++;
      printf("\nN%i:",i+1);
      scanf("%i",&n);
      vetor[i]=n;
      break;
    }
  }while(n!=-1);
  printf("\t");
  t=i;
  i=0;
  printf("Foram inseridos %i valores",t);

  do{
    n=vetor[i];
    soma=soma+vetor[i];
    printf("%i,",vetor[i]);
    i++;
  }while(i<t);
  i=t;
  printf("\t");

  do{
    i--;
    n=vetor[i];
    if(n<soma/t){
      media++;
    }
    if(n>7){
      cont++;
    }
    printf("\n%i\n",vetor[i]);
  }while(i>0);
  i=0;
  printf("\t A soma é: %.1f e a média:%.1f\n",soma,soma/t);
  printf("\tHá %i números acima da média e %i são acima de 7.",media,cont++);

  printf("\n\nPrograminha encerrado!\n\n");
}