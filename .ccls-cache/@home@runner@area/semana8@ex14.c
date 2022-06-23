#include <stdio.h>

int qualTriangulo(int a, int b, int c){
  if(a==b && a==c)
  return 0;
  else
    if(a==b || b==c || a==c)
      return 1;
    else
      return 2;
}

int main(){
  int a,b,c;
  printf("A: ");
  scanf("%i",&a);
  printf("B: ");
  scanf("%i",&b);
  printf("C: ");
  scanf("%i",&c);
  if(qualTriangulo(a,b,c)==0)
    printf("Triângulo equilátero.\n");
  else
    if(qualTriangulo(a,b,c)==1)
      printf("Triângulo isósceles.\n");
    else
       printf("Triângulo escaleno.\n");
  return 0;    
}