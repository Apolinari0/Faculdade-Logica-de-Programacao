#include <stdio.h>

int main(){
  float vetor[4],media=0, cont=0;
  for(int i=0;i<4;i++){
    printf("Digite a nota: ");
    scanf("%f",&vetor[i]);
    cont+=vetor[i];
  }
  for(int i=0;i<4;i++){
    printf("Notas: %f,\n",vetor[i]);
  }
  media= cont/4;
  printf("Média: %f",media);
  return 0;  
}