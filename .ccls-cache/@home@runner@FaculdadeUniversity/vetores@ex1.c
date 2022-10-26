#include <stdio.h>

int main(){
  int i,vetorN[5];
  for(i=0;i<5;i++){
    printf("Digite um número: ");
    scanf("%i",&vetorN[i]);
  }
  for(i=0;i<5;i++){
    printf("%i, ",vetorN[i]);
  }
  return 0;
}