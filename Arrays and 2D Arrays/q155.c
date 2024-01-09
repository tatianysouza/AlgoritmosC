// 155. Programa que lê dez números inteiros e, após finalizar a leitura, lê um número inteiro N (entre 1 e 10). Imprime qual foi o enésimo número digitado pelo usuário.
#include <stdio.h>

const int tamanho = 10;

void main() {
  int vet[tamanho], k, n;
  for (k = 0; k < tamanho; k++) {
    printf("informe um numero: ");
    scanf("%d", &vet[k]);
  }
  printf("informe outro numero: ");
  scanf("%d", &n);
  printf("%d ", vet[n-1]);
}
