// 188. Programa que lê uma matriz quadrada de ordem 5 de números reais e a seguir lê um número inteiro N e determina a quantidade de números primos na coluna N.
#include <stdio.h>
const int ordem = 5;

void main() {
  int mat[ordem][ordem], num, cont2 = 0, k, j, z;
  for (k = 0; k < ordem; k++) {
    for (j = 0; j < ordem; j++) {
      printf("Informe um número: ");
      scanf("%d", &mat[k][j]);
    }
  }
  printf("Informe o número da linha (1-%d): ", ordem);
  scanf("%d", &num);
  num--; 
  for (j = 0; j < ordem; j++) {
    int cont = 0;
    for (z = 1; z <= mat[num][j]; z++) {
      if (mat[num][j] % z == 0) {
        cont++;
      }
    }
    if (cont == 2) {
      cont2++;
    }
  }
  printf("A linha %d tem %d números primos.\n", num + 1, cont2);
}