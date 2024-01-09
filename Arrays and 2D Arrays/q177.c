// 177. Programa que lê uma matriz quadrada de ordem 5 de números reais e calcula a sua matriz transposta.
#include <stdio.h>
const int ordem = 5;

void main(){
  int mat[ordem][ordem], k, j;
  for(k=0; k<ordem; k++){
    for(j=0; j<ordem; j++){
      printf("Informe um numero: ");
      scanf("%d", &mat[j][k]);
    }
  }
  for(j=0; j<ordem; j++){
    for(k=0; k<ordem; k++){
      printf("%d ", mat[j][k]);
    }
    printf("\n");
  }
}