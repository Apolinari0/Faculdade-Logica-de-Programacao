#include <stdio.h>

int main(){
  
int cont=0;

char vetor[10],x[10];

for(int i=0;i<10;i++){
  printf("Digite uma letra: ");
   scanf(" %s",&vetor[i]);
  if(vetor[i]!= 'a' && vetor[i]!= 'A'
    && vetor[i]!= 'e' && vetor[i]!= 'E'
    && vetor[i]!= 'i'&& vetor[i]!= 'I'
    && vetor[i]!= 'o'&& vetor[i]!= 'O'
    && vetor[i]!= 'u' && vetor[i]!= 'U'){
      x[cont] = vetor[i];
      cont++;
    }
  }
  for(int i=1;i<cont;i++){
    printf("consoantes: %c\n",x[i]);
  }
  printf("Números de consoantes: %i",cont);
}