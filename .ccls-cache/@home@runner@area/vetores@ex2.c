#include <stdio.h>

int main(){
  float vetorX[10];
  int i;
  for(i=0;i<10;i++){
    printf("Digite um número real: ");
    scanf("%f",&vetorX[i]);
  }
  for(i=9;i>=0;i--){
    printf("%f,",vetorX[i]); 
    }
  return 0;
}