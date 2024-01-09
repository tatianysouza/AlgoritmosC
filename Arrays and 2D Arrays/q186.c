// 186. Programa que lê uma matriz quadrada de ordem 5 de números reais e a seguir lê um número inteiro N entre 1 e 5 e calcule o maior elemento da linha N.
#include <stdio.h>
const int ordem = 5;

void main() {
  int mat[ordem][ordem], maior = 0, k, num;
  for (k = 0; k < ordem; k++) {
    for (int j = 0; j < ordem; j++) {
      printf("Digite um número: ");
      scanf("%d", &mat[k][j]);
    }
  }
  printf("Informe um número entre 1-%d: ",ordem);
  scanf("%d", &num);
  for (k = 0; k < ordem; k++) {
    if (mat[num - 1][k] > maior) {
      maior = mat[num - 1][k];
    }
  }
  printf("O maior valor da linha %d é: %d\n", num, maior);
}
