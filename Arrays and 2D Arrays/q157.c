// 157. Programa que lê um vetor de 10 números inteiros e, após terminar a leitura, lê um número inteiro N. Imprime todas as posições em que o número N aparece dentro do vetor.
#include <stdio.h>

const int tamanho = 10;

void main() {
  int vet[tamanho], k, cont=0;
  for (k = 0; k < tamanho; k++) {
    printf("informe um numero: ");
    scanf("%d", &vet[k]);
    cont=cont+vet[k];
  }
  
  for(k=0; k<tamanho; k++){
    if(vet[k] > cont/tamanho){
      printf("%d ",vet[k]);
    }
  }
}
