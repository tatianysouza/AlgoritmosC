// 176. Programa que lê uma matriz quadrada de ordem 4 de números inteiros e imprime a matriz lida.
#include <stdio.h>
const int ordem = 4;

void main(){
  int mat[ordem][ordem], k, j;
  for(k=0; k<ordem; k++){
    for(j=0; j<ordem; j++){
      printf("Informe um numero: ");
      scanf("%d", &mat[j][k]);
    }
  }
  for(k=0; k<ordem; k++){
    for(j=0; j<ordem; j++){
      printf("%d ", mat[j][k]);
    }
    printf("\n");
  }
}