// 154. Programa que lê dez números inteiros e, após finalizar a leitura, imprime todos os números lidos na ordem inversa em que foram digitados.

#include <stdio.h>

const int tamanho = 10;

void main() {
  int numeros[tamanho];
  int k;
  for (k = 0; k < tamanho; k++) {
    printf("informe um numero: ");
    scanf("%d", &numeros[k]);
  }
  for (k = tamanho - 1; k >= 0; k--) {
    printf("%d ", numeros[k]);
  }
}
