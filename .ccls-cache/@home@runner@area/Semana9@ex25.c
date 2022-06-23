#include <stdio.h>
int main() {
int media=0,i,idade=0,numPessoa=0;
printf("Digite o número de pessoas");
scanf("%i",&numPessoa);
for(i=1;i<=numPessoa;i++){
printf("\nDigite a idade da pessoa:");
scanf("%i",&idade);
media=media+(idade/numPessoa);
}
if(numPessoa!=0){
if((media>=0)&&(media<=25)){
printf("Turma jovem, média de idade igual a: %i",media);
}
else
  if((media>=26)&&(media<=60)){
printf("Turma adulta, média de idade igual a: %i",media);
}
  else
    if(media<60){
printf("Turma idosa, média de idade igual a: %i",media);
}
}
return 0;
}