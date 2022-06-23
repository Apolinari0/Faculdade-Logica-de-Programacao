#include <stdio.h>

int calculaIdade(int dias, int meses, int anos){
  return dias+meses*30+anos*365;
}

int main(){
  int dias, meses, anos;
  printf("Dias: ");
  scanf("%i",&dias);
  printf("Meses: ");
  scanf("%i",&meses);
  printf("Anos: ");
  scanf("%i",&anos);
  printf("Sua idade em dias: %i.\n",calculaIdade(dias,meses,anos));
  return 0;
}