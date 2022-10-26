#include <stdio.h>
//Utilizando listas faça um programa que faça 5 perguntas para uma pessoa sobre um crime. As perguntas são:
//"Telefonou para a vítima?"
//"Esteve no local do crime?"
//"Mora perto da vítima?"
//"Devia para a vítima?"
//"Já trabalhou com a vítima?" O programa deve no final emitir uma classificação sobre a participação da pessoa no crime. Se a pessoa responder positivamente a 2 questões ela deve ser classificada como "Suspeita", entre 3 e 4 como "Cúmplice" e 5 como "Assassino". Caso contrário, ele será classificado como "Inocente".
void imprimePergunta(int i){
  switch(i){
    case 1:
      printf("Telefonou para a vítima?(s/n) ");
      break;
    case 2:
      printf("Esteve no local do crime?(s/n) ");
      break;
    case 3:
      printf("Mora perto da vítima?(s/n) ");
      break;
    case 4:
      printf("Devia para a vítima?(s/n) ");
      break;
    case 5:
      printf("Já trabalhou com a vítima?(s/n) ");
      break;
    default:
      break;
  }
}
int main(){
  int i,cont=0;
  char respostas[5];
 for(i=0;i<5;i++){
   imprimePergunta(i+1);
   scanf("%s",&respostas[i]);
   if(respostas[i]=='s'){
     cont++;
   }
 }
  printf("\nSituação ao caso:\n");
  if(cont==1 || cont==0)
    printf("Inocente");
  else
    if(cont==2)
     printf("Suspeito");
    else
      if(cont==3 || cont==4)
       printf("Cúmplice");
      else
       if(cont==5)
       printf("Assassino");
return 0;
}