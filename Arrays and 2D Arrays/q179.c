// 179. Programa que lê uma matriz quadrada de ordem 5 de números reais e imprime todos os elementos que estão acima e abaixo da diagonal principal.
#include <stdio.h>
const int ordem = 5;

void main() {
  int mat[ordem][ordem], k, j;
  for (k = 0; k < ordem; k++) {
    for (j = 0; j < ordem; j++) {
      printf("Informe um numero: ");
      scanf("%d", &mat[j][k]);
    }
  }
  printf("acima: ");
  for (k = 0; k < ordem-1; k++) {
    for(j=k+1; j<ordem; j++ ){
      printf("%d ", mat[j][k]); 
    }  
  }
  printf("\nabaixo: ");
  for (k = 0; k < ordem-1; k++) {
    for(j=k+1; j<ordem; j++ ){
      printf("%d ", mat[k][j]); 
    }  
  }
}