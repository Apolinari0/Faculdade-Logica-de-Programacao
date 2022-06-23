#include <stdio.h>

int main(){
  int a,i,n,f;
  a=1;
  printf("N: ");
  scanf("%i",&n);
  for (i=n;i>=1;i--){
    f=a*i;
    a=f;
  }
  printf("O fatorial de %i é %i",n,a);
  return 0;
}