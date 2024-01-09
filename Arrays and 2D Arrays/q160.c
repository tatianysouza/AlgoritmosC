// 160. Programa que lê um vetor de 10 números inteiros e inverte todos os elementos do vetor. O programa deve ser resolvido com a utilização de apenas um vetor.
#include <stdio.h>
const int tamanho = 10;

void main() {
  int vet[tamanho], k, aux;

  for (k = 0; k < tamanho; k++) {
    printf("Informe um número: ");
    scanf("%d", &vet[k]);
  }
  for (k = 0; k < tamanho / 2; k++) {
    aux = vet[k];
    vet[k] = vet[tamanho - 1-k];
    vet[tamanho - 1-k] = aux;
  }
  for (k = 0; k < tamanho; k++) {
    printf("%d ", vet[k]);
  }
}
