#include <stdio.h>

int main(){
  int n,mult,i;
  printf("Digite um número entre 1 a 10: ");
  scanf("%i",&n);

  printf("Tabuada do %i",n);
  for(i=1;i<=10;i++){
    mult=i*n;
  printf("\n%i X %i = %i",n,i,mult);
    }
  return 0;
}