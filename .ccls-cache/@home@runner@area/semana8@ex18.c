#include <stdio.h>

int verificaBissexto(int ano){
  if((ano%400==0) || (ano%4==0 && ano%100!=0))
    return 1;
  else
    return 0;
}

int main(){
  int ano;
  printf("Ano: ");
  scanf("%i",&ano);
  if(verificaBissexto(ano)==1)
    printf("Ano é bissexto.\n");
  else
    printf("Ano não é bissexto.\n");
  return 0;
}