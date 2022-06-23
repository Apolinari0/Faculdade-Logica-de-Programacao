#include <stdio.h>
int main() {
int maior=0, menor=0, aux=0, i=0,soma=0;
do{
printf("\n Digite um numero: ");
scanf("%i",&aux);
if(i==0){
maior=aux;
menor=aux;
i++;
}else if(aux>maior){
maior=aux;
}else if(aux<menor){
menor=aux;
}
soma = maior+menor;
printf("\n O número maior é:%i",maior);
printf("\n O número menor é:%i",menor);
printf("\n a soma é: %i + %i = %i",maior,menor,soma);
}while(1);
return 0;
}