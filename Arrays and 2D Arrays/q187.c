// 187. Programa que lê uma matriz quadrada de ordem 5 de números reais e a seguir lê um número inteiro N e determine a quantidade de números pares existentes na linha N.
#include <stdio.h>
const int ordem = 5;

void main() {
  int mat[ordem][ordem], cont = 0, k, num;
  for (k = 0; k < ordem; k++) {
    for (int j = 0; j < ordem; j++) {
      printf("Digite um número: ");
      scanf("%d", &mat[k][j]);
    }
  }
  printf("Informe um número entre 1-%d: ",ordem);
  scanf("%d", &num);
  for (k = 0; k < ordem; k++) {
    if (mat[num - 1][k] % 2 ==0) {
      cont++;
    }
  }
  printf("A linha %d tem: %d numeros pares\n", num, cont);
}
