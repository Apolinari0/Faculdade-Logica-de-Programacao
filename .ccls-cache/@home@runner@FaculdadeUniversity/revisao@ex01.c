#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int i,v[100],busca,cont=0,n;
  srand(time(NULL));

  do{
    printf("Digite o tamanho do vetor: ");
    scanf("%i",&n);
    if(n>100 && n<=0){
      printf("Ditige entre 0 e 100!");
    }
  }while(n>100 && n<=0);

  for(i=0;i<n;i++){
   v[i]=rand()%101;
   printf("%i,",v[i]);
  }
  printf("\nDigite o número que deseja buscar: \n");
  scanf("%i",&busca);

  for(i=0;i<n;i++){
    if(busca==v[i]){
      printf("posição %i\n",i);
      cont++;
    }
  }
  printf("\nNúmero %i,%i ocorrências.",busca,cont);
  return 0;
}