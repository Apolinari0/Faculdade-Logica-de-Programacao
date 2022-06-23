#include <stdio.h>

int main(){
  int i;
  do{
    printf("Informe a nota do aluno: .\n");
        scanf("%i",&i);
        if(i<0||i>10){
            printf("Valor inváldo!.\n");
            printf("\n\n");
          }
     printf("\n\n");
  }while(i>0 || i<10);
     
}