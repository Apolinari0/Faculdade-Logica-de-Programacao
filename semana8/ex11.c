#include <stdio.h>

void imprimeCrescente3(int n1,int n2,int n3){
  if(n1<=n2 && n1<=n3){
    printf("%i, ",n1);
    if(n2<=n3)
      printf("%i, %i",n2,n3);
  }
  else{
    if(n2<=n1 && n2<=n3){
      printf("%i, ",n2);
      if(n1<=n3)
        printf("%i, %i",n1,n3);
      else
        printf("%i, %i",n3,n1);
    }
    else{
      printf("%i, ",n3);
      if(n1<=n2)
        printf("%i, %i",n1,n2);
      else
        printf("%i, %i",n2,n1);
    }
  }
}

int main(){
  int n1,n2,n3;
  printf("N1: ");
  scanf("%i",&n1);
  printf("N2: ");
  scanf("%i",&n2);
  printf("N3: ");
  scanf("%i",&n3);
  imprimeCrescente3(n1,n2,n3);
  return 0;
}