// 161. Programa que lê um vetor de vinte caracteres e verifica se o vetor é ou não um palíndromo.
#include <stdio.h>
const int tamanho = 20;

void main() {
  int vet[tamanho], k, cont=0;

  for (k = 0; k < tamanho; k++) {
    printf("Informe um número: ");
    scanf("%d", &vet[k]);
  }
  for (k = 0; k < tamanho / 2; k++) {
    if (vet[k] == vet[tamanho-1-k]){
      cont=cont+1;  
    }
  }
  if(cont==tamanho/2){
    printf("Eh palindromo");
  }
  else{
    printf("nao eh palindromo");
  }
}
