// 159. Programa que lê um vetor de 10 números inteiros e dois números inteiros M e N entre 1 e 10. Inverte os elementos que ocupam as posições M e N do vetor. O programa imprime o estado do vetor antes e após a inversão.

#include <stdio.h>

const int tamanho = 10;

void main() {
  int vet[tamanho], k, m, n;
  for (k = 0; k < tamanho; k++) {
    printf("informe um numero: ");
    scanf("%d", &vet[k]);
  }
  printf("Informe as posicoes desejadas: ");
  scanf("%d%d", &m,&n);
  for (k = 0; k < tamanho; k++) {
    printf("%d ", vet[k]);
  }
  printf("\n");
  int aux = vet[m];
  vet[m]=vet[n];
  vet[n]=aux;
  for (k = 0; k < tamanho; k++) {
    printf("%d ", vet[k]);
  }
}
