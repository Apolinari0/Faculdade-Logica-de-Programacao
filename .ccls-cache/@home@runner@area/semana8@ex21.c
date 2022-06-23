#include <stdio.h>

char Conceito(float media){
  if(media>=9.0)
    return 'A';
  if(media>=7.5)
    return 'B';
  if(media>=6.0)
    return 'C';
  if(media>=4.0)
    return 'D';
  if(media<4.0)
    return 'E';
}
int main(){
  float media;
  printf("Média: ");
  scanf("%f",&media);
  printf("Média do aluno:%f , conceito: %f.\n",media,Conceito(media));
  return 0;
}