// 191. Programa que lê duas matrizes quadradas de ordem 5 de números reais e gera uma terceira matriz correspondente à soma das duas matrizes lidas.

#include <stdio.h>
const int ordem = 5;

void main() {
  int mata[ordem][ordem], matb[ordem][ordem], matc[ordem][ordem], num, k, j;
  printf("completando primeira matriz:\n");
  for (k = 0; k < ordem; k++) {
    for (j = 0; j < ordem; j++) {
      printf("Informe um número: ");
      scanf("%d", &mata[j][k]);
    }
  }
  printf("completando segunda matriz:\n");  
  for (k = 0; k < ordem; k++) {
    for (j = 0; j < ordem; j++) {
      printf("Informe um número: ");
      scanf("%d", &matb[j][k]);
    }
  }
  for (k = 0; k < ordem; k++) {
    for (j = 0; j < ordem; j++) {
      matc[j][k]= mata[j][k]+matb[j][k];
    }
  }
}
