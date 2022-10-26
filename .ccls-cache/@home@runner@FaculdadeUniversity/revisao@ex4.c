#include <stdio.h>

int main(){
  int i,cont=0;
  char v[10],x[10];
  
//Faça um Programa que leia um vetor de 10 caracteres, e diga quantas consoantes foram lidas. Imprima as consoantes.
  
  for(i=0;i<10;i++){
    printf("Digite uma letra: ");
    scanf("%s",&v[i]);
    if(v[i]!='a'&& v[i]!='A'&& v[i]!='e' && v[i]!='E' && v[i]!= 'i' && v[i]!='I' && v[i]!='o' && v[i]!='O' && v[i]!='U'&& v[i]!='u'){
      x[cont]=v[i];
     cont++;
      }
    }
    for(i=1;i<cont;i++){
      printf("%c\n",x[i]);
    }
    printf("Foram digitados %i consoantes",cont);
  return 0;
  }
