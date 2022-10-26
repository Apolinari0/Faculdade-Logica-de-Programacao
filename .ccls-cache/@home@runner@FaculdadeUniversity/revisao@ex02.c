#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int i,q[20];
  float p[20],faturamento;
  srand(time(NULL));

  for(i=0;i<20;i++){
  p[i]= (float)(rand()%100+1);
  q[i]=rand()%11;
  printf("Produto %i, quantidades:%.2i preço:%.2f\n",i+1,q[i],p[i]);
  faturamento = faturamento + (q[i]*p[i]);
}
  printf("Faturamento deR$: %.2f\n",faturamento);
  return 0;
}