// 192. Programa que lê uma matriz quadrada de ordem 5 de números reais e um número real N e gera uma terceira matriz correspondente à multiplicação da matriz lida por N.

#include <stdio.h>
const int ordem = 3;

void main() {
  int mata[ordem][ordem], matb[ordem][ordem], num, k, j ;
  printf("completando primeira matriz:\n");
  for (k = 0; k < ordem; k++) {
    for (j = 0; j < ordem; j++) {
      printf("Informe um número: ");
      scanf("%d", &mata[j][k]);
    }
  }
  printf("Informe um numero N: ");  
  scanf("%d", &num);
  for (k = 0; k < ordem; k++) {
    for (j = 0; j < ordem; j++) {
      matb[j][k]= mata[j][k]*num;
    }
  }
}
  