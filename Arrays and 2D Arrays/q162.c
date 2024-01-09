// 162. Programa que lê um número inteiro entre 0 e 255 e calcula o seu valor correspondente em binário.
#include <stdio.h>

void main() {
  int bin, cont = 0, k, cont2 = 0;
  printf("Informe um número: ");
  scanf("%d", &bin);
  int temp = bin;
  do {
    bin = bin / 2;
    cont = cont + 1;
  } 
  while (bin != 0);
  cont2 = cont;
  int vet[cont];
  for (k = 0; k < cont; k++) {
    int divisao = temp % 2;
    temp = temp / 2;
    cont2 = cont2 - 1;
    vet[cont2] = divisao;
  }
  for (k = 0; k < cont; k++) {
    printf("%d", vet[k]);
  }
}