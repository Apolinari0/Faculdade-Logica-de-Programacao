#include <stdio.h>

int verificaPar(int n){
  if(n%2==0)
    return 1;
  else
    return 0;
}

int main(){
  int n;
  printf("N: ");
  scanf("%i",&n);
  if(verificaPar(n)==1)
    printf("Número par.\n");
  else
    printf("Número ímpar.\n");
  return 0;
}
