#include <stdio.h>

float verificaSoma(float a, float b, float c){
 if (a>= b && a>=c){
   if( b >= c)
     return a + b;
   else 
     return a + c;
   }
  if (b>=c && b>=a){
    if (c>=a)
      return b + c;
    else
      return b + a;
    }
  if (c>= b && c>=a){
    if(b >= a)
      return c + b;
    else
      return c + a;
    }
     
}

int main(){
  float a,b,c;
  printf("A: ");
  scanf("%f",&a);
  printf("B: ");
  scanf("%f",&b);
  printf("C: ");
  scanf("%f",&c);
  printf("A soma entre os dois maiores números é: %.2f.\n",verificaSoma(a,b,c));
  return 0;
}