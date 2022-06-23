#include <stdio.h>

float sNew(float s, float rj){
 return s * (rj/100) + s;
}


int main(){
 float s,rj;
  printf("Digite o slário:R$: ");
  scanf("%f",&s);
  printf("Porcentagem do reajuste salarial: ");
  scanf("%f",&rj);
  printf("Seu salario com o reajuste salarial é de R$ %.2f.",sNew(s,rj));
}