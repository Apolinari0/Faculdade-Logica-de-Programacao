#include <stdio.h>

int main(){
  int v1[10], v2[10], v3[20];
  int i,contV1=0,contV2=0;

  for(i=0;i<10;i++){
    printf("v1[%i] = ",i);
    scanf("%i",&v1[i]);
  }
  printf("\n");
  for(i=0;i<10;i++){
    printf("v2[%i] = ",i);
    scanf("%i",&v2[i]);
  }
  
  for(i=0;i<20;i++){
    //v3[i]
    //v1[contV1]
    //v2[contV2]
    if(contV1<10 && contV2<10){
      if(v1[contV1]<v2[contV2]){
        v3[i] = v1[contV1];
        contV1++;
      }
      else{
        v3[i] = v2[contV2];
        contV2++;
      }
    }
    else{
      if(contV1==10){
        v3[i] = v2[contV2];
        contV2++;
      }
      else{
        v3[i] = v1[contV1];
        contV1++;
      }
    }
  }

  printf("\n");
  for(i=0;i<20;i++){
    printf("v3[%i] = %i\n",i,v3[i]);
  }
  
  return 0;
}