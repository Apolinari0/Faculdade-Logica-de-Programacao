#include <stdio.h>

int verificaVoto(int anoAtual, int AnoN){
  if (anoAtual - AnoN >= 16)
    return 1;
  else
    return 0;
}


int main(){
 int anoAtual,AnoN;
  printf("Digite o ano atual: ");
  scanf("%i",&anoAtual);
  printf("Digite o ano de seu nascimento: ");
  scanf("%i",&AnoN);
  if (verificaVoto(anoAtual,AnoN)==1)
    printf("Poderá votar.\n");
  else
    printf("Não poderá votar.\n");
  return 0;
}