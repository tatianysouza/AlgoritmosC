// 260. Subprograma recursivo que recebe um número inteiro e calcula a sua quantidade de algarismos.
#include <stdio.h>

int algarismo(int n) {
  if (n < 10) {
    return 1;
  } 
  return algarismo(n/10) +1;
}

void main() {
  int n;
  printf("Digite um valor: ");
  scanf("%d", &n);
  int termo = algarismo(n);
  printf("total de algarismos: %d", termo);
  printf("\n");
}
