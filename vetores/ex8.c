#include <stdio.h>

int main(){
  int i,vi[5];
  float vh[5];
  for(i=0;i<5;i++){
    printf("Pessoa %i\n",i+1);
    printf("Digite sua idade: ");
    scanf("%i",&vi[i]);
    printf("Digite sua altura: ");
    scanf("%f",&vh[i]);
  }
  for(i=4;i>=0;i--){
    printf("Pessoa %i\n",i+1);
    printf("Idade: %i\n",vi[i]);
    printf("Alturas: %.2f\n",vh[i]);
  }
  return 0;
}