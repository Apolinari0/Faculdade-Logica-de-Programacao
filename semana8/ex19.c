#include <stdio.h>

int Centi(int n){
  return n * 100;
}

int main(){
  int n;
  printf("Quantidade em metros: ");
  scanf("%i",&n);
  printf("%i metros = %i centimetros.\n",n,Centi(n));
    return 0;
}