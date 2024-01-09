// 181. Programa que lê uma matriz quadrada de ordem 5 de números reais e a seguir leia um número inteiro N entre 1 e 5 e imprima os N primeiros elementos da sua diagonal principal.
#include <stdio.h>
const int ordem = 5;

void main() {
  int mat[ordem][ordem], k, j, num;
  for (k = 0; k < ordem; k++) {
    for (j = 0; j < ordem; j++) {
      printf("Informe um numero: ");
      scanf("%d", &mat[j][k]);
    }
  }
  printf("Informe um numero: ");
  scanf("%d", &num);
  for (k = 0; k < num; k++) {
    printf("%d ", mat[k][k]);
  }
}