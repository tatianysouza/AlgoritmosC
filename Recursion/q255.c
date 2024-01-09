// 255. Subprograma recursivo que recebe o termo inicial e a razão de uma progressão aritmética e um número inteiro positivo N e calcula o enésimo termo da progressão.

#include <stdio.h>

int progressao(int inicio, int razao, int n) {
  if (n == 1) {
    return inicio;
  } 
  return progressao(inicio + razao, razao, n - 1);
}

void main() {
  int inicio, razao, n;
  printf("Digite o termo inicial: ");
  scanf("%d", &inicio);
  printf("Digite a razão: ");
  scanf("%d", &razao);
  printf("Digite o número: ");
  scanf("%d", &n);
  int termo = progressao(inicio, razao, n);
  printf("O enésimo termo da progressão é: %d\n", termo);
}
