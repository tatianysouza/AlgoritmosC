// 184. Programa que lê uma matriz quadrada de ordem 5 de números reais e a seguir leia um número inteiro N entre 1 e 5 e calcule a média aritmética dos elementos da coluna N.
#include <stdio.h>
const int ordem = 5;

int main() {
  int mat[ordem][ordem], k, j, num;
  float media = 0;
  for (k = 0; k < ordem; k++) {
    for (j = 0; j < ordem; j++) {
      printf("Informe um número: ");
      scanf("%d", &mat[k][j]);
    }
  }
  printf("Informe um número entre 1-5: ");
  scanf("%d", &num);
  for (j = 0; j < ordem; j++) {
    media += mat[j][num - 1] / (float)ordem;
  }
  printf("A média da linha %d é %.2f\n", num, media);
}
