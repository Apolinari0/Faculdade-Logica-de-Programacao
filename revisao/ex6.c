#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Faça um Programa que peça as quatro notas de 10 alunos, calcule e armazene num vetor a média de cada aluno, imprima o número de alunos com média maior ou igual a 7.0.

int main(){
  int cont=0;
  float nota1,nota2,nota3,nota4,media[10];
  srand(time(NULL));
  for(int i=0;i<10;i++){
    printf("Aluno %i\n",i+1);
    nota1= rand()%11;
    printf("%.2f\n",nota1);
    nota2=rand()%11;
    printf("%.2f\n",nota2);
    nota3=rand()%11;
    printf("%.2f\n",nota3);
    nota4=rand()%11;
    printf("%.2f\n",nota4);
    media[i]=(nota1 + nota2 + nota3 +nota4)/4;
    printf("Média: %.2f\n",media[i]);
  }
printf("\n");
  
  for(int i=0;i<10;i++){
    if(media[i]>=7){
      cont++;
    }
  }
    printf("%i alunos com média acima de 7.",cont);
  
return 0;
  
}