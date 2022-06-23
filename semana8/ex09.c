#include <stdio.h>

float verifica(float a, float b){
  if (a>=b)
    printf("%.2f, %.2f.",b,a);
  else
    printf("%.2f, %.2f",a,b);
}

int main(){
 float a,b;
  printf("A: ");
  scanf("%f",&a);
  printf("B: ");
  scanf("%f",&b);
  printf("assim fica os números em ordem crescente ",verifica(a,b));
 return 0;
}