#include <stdio.h>

int main(){
  int n1, n2, i;
  printf("Digite o primeiro número: ");
  scanf("%i",&n1);
  printf("Digite um segundo número: ");
  scanf("%i",&n2);
  if(n1<=n2){
  for(i=n1;i<=n2;i++)
    printf("%i\n",i);
    }
  else{
    for(i=n2;i<=n1;i++)
      printf("%i\n",i);
  }
  return 0;
}