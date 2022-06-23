#include <stdio.h>

float CalcMedia(float n1, float n2, float n3){
  return (n1 + n2 + n3)/3;
}

int main(){
  float n1,n2,n3;
  printf("Nota 1: ");
  scanf("%f",&n1);
  printf("Nota 2: ");
  scanf("%f",&n2);
  printf("Nota 3: ");
  scanf("%f",&n3);
  printf("A média do aluno é: %.1f.\n",CalcMedia(n1,n2,n3));
  return 0;
}