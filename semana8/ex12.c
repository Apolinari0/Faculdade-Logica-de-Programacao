#include <stdio.h>

int verificaExistencia(int a, int b, int c){
 if (a < b + c && b < a + c && c < b + a)
   return 1;
  else
   return 0;
  }

int main(){
 int a,b,c;
  printf("A: ");
  scanf("%i",&a);
  printf("B: ");
  scanf("%i",&b);
  printf("C: ");
  scanf("%i",&c);
  if(verificaExistencia(a,b,c)==1)
    printf("Esse triângulo existe");
  else
    printf("Esse lados não formam um triangulo.");
  return 0;
}