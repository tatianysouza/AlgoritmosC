// 261. Subprograma recursivo que recebe um número inteiro e calcula a soma de todos os seus algarismos.
#include <stdio.h>

int algarismo(int numero) {
  if (numero == 0) {
    return 0;
  }
  return (numero % 10) + algarismo(numero / 10);
}

void main() {
  int n;
  printf("Digite um valor: ");
  scanf("%d", &n);
  int termo = algarismo(n);
  printf("somas dos algarismos: %d", termo);
  printf("\n");
}
