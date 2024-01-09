// 182. Programa que lê uma matriz quadrada de ordem 5 de números reais e determina o maior valor presente na diagonal principal.
#include <stdio.h>
const int ordem = 3;

void main() {
  int mat[ordem][ordem], max = 0;
  for (int k = 0; k < ordem; k++) {
    for (int j = 0; j < ordem; j++) {
      printf("Digite um numero: ");
      scanf("%d", &mat[k][j]);
    }
  }
  for (int k = 0; k < ordem; k++) {
    if (mat[k][k] > max) {
      max = mat[k][k];
    }
  }
  printf("\nO maior valor da diagonal principal é: %d\n", max);
}
