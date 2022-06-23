#include <stdio.h>

int main(){
  int i, n, par, impar;
  par=0;
  impar=0;
  for (i=1;i<=10;i++){
    printf("N%i: ",i);
    scanf("%i",&n);
    if(n%2==0){
      par++;
    }
    else
      impar++;
  }
  printf("%i números ímpares e %i números pares",impar,par);
  return 0;
}