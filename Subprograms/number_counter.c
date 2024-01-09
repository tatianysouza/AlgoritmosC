// Programa em C que encontra o k-ésimo algarismo de um número inteiro.
#include <stdio.h>

int contarAlgarismos(int n) {
  if (n == 0) {
    return 0;
  }
  return 1 + contarAlgarismos(n / 10);
}

int kEsimoAlgarismoRecursivo(int n, int k) {
  if (k > contarAlgarismos(n)) {
    return 0;
  } else if (k == 1) {
    return n % 10;
  }
  return kEsimoAlgarismoRecursivo(n / 10, k - 1);
}

int main() {
  int numero, k, kEsimo;

  printf("Digite um número inteiro: ");
  scanf("%d", &numero);

  printf("Digite o valor de k: ");
  scanf("%d", &k);

  kEsimo = kEsimoAlgarismoRecursivo(numero, k);

  printf("O k-ésimo algarismo de %d (da direita para a esquerda) é: %d\n",
         numero, kEsimo);

  return 0;
}
