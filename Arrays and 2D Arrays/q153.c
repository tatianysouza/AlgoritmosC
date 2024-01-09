// 153. Programa que lê dez números inteiros e, após finalizar a leitura, imprime todos os números lidos na mesma ordem em que foram digitados.
#include <stdio.h>

const int tamanho = 10;

void main() {
  int vet[tamanho];
  int k;
  for (k = 0; k < tamanho; k++) {
    printf("Informe um número: ");
    scanf("%d", &vet[k]);
  }
  for (k = 0; k < tamanho; k++) {
    printf("%d ", vet[k]);
  }
}
