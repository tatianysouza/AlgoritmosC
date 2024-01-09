// 185. Programa que lê uma matriz quadrada de ordem 5 de números reais e calcula o valor da soma dos elementos de cada uma de suas linhas.
#include <stdio.h>
const int ordem = 5;

void main() {
  int mat[ordem][ordem], k, j, soma = 0;
  for (k = 0; k < ordem; k++) {
    for (j = 0; j < ordem; j++) {
      printf("Informe um numero: ");
      scanf("%d", &mat[j][k]);
    }
  }
  for (k = 0; k <ordem; k++) {
    soma=0;
    for (j = 0; j < ordem; j++) {
      soma = soma + mat[j][k];
    }
    printf("a soma da linha %d eh %d\n", k+1, soma);
  }
}