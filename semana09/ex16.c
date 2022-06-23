#include <stdio.h>

int main(){
  int f1,f2,f3;
  f1=0;
  f2=1;
  f3=0;
  printf("%i\n",f1);
  printf("%i\n",f2);
  while(f3<500){
    f3=f1+f2;
    f1=f2;
    f2=f3;
    printf("%i\n",f3);
  }
  return 0;
}