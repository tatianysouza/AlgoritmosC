// 156. Programa que lê um vetor de 10 números inteiros e, após terminar a leitura, lê um número inteiro N. Imprime todos os elementos do vetor que são maiores que N.
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
  
  for(k=0; k<tamanho; k++){
    if(vet[k] < n){
      printf("%d ",vet[k]);
    }
  }
}
