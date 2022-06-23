#include <stdio.h>

char verificaLetra(char letra){
  if((letra>=65 && letra<=90) || (letra>=97 && letra<=122))
   return 1;
  else
    return 0;
}

int main(){
  char letra;
  printf("Letra: ");
  scanf("%c",&letra);
  if(verificaLetra(letra)==1)
   printf("É uma letra.\n");
  else
   printf("Não é uma letra.\n");
  return 0;
}