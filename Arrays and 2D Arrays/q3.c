#include <stdio.h>
const int ordem= 3;

void main(){
  int k, j, mat[ordem][ordem], cont=0, z, cont2=0;
  for(k=0; k<ordem; k++){
    for(j=0; j<ordem; j++){
      printf("Informe um numero: ");
      scanf("%d", &mat[j][k]);
    }
  }
  for(k=0; k<ordem; k++){
    cont2=0;
    for(j=0; j<ordem; j++){
      cont=0;
      for(z=1; z<=mat[j][k]; z++){
        int div= mat[j][k]%z;
        if(div==0){
          cont++;
        }
      }
      if(cont==2){
        cont2++;
      }
    }
    printf("Linha %d: %d primos\n", k+1, cont2);
  }
}