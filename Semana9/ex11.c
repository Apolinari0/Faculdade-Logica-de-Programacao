#include <stdio.h>

int main(){
  int n1, n2, i, soma;
  printf("Digite o primeiro número: ");
  scanf("%i",&n1);
  printf("Digite um segundo número: ");
  scanf("%i",&n2);
  if(n1<=n2){
  for(i=n1;i<=n2;i++){
    printf("%i\n",i);
    soma=0;
    soma=soma + i;
    }
    printf("a soma é %i\n",soma);
    }
  else{
    for(i=n2;i<=n1;i++){
      printf("%i\n",i);
    soma=0;
    soma=soma + i;
      }
     printf("a soma é %i\n",soma);
  }
  return 0;
}
