#include <stdio.h>

int main(){
  int n,v,i;
  v=0;
  printf("Digite o numero que voce quer saber se é primo: ");
  scanf("%i",&n);
  for(i=2;i<=n/2;i++){
    if(n%i==0){
      v++;
    }
    if(v==0){
      printf("O número %i é primo",n);
    }
    else
      printf("O número %i nao é primo",n);
  }
  return 0;
}
