#include <stdio.h>

int verificaLetra(char n){
  if(n=='a' || n=='A' ||
    n=='e' || n=='E' ||
    n=='i' || n=='I' ||
    n=='o' || n=='O' ||
    n=='u' || n=='U' 
    )
    return 1;
  else
  return 0;
}

int main(){
 char n;
  printf("Digite uma letra: ");
  scanf("%c",&n);
  if(verificaLetra(n)==1)
    printf("Vogal.\n");
  else
    printf("Consoante.\n");
  return 0;
}