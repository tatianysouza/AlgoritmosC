// Programa em C que lê um número inteiro positivo N e imprime o enésimo número primo positivo.

#include <stdio.h>

int main() {
  int n, cont = 0, num = 2;

  printf("Digite o valor de N: ");
  scanf("%d", &n);

  while (cont < n) {
    int isPrime = 1;
    
    for (int i = 2; i * i <= num && isPrime; i++) {
      if (num % i == 0) {
        isPrime = 0;
      }
    }    
    if (isPrime) {
      cont++;
    }
    num++;
  }
  printf("O %dº número primo é: %d\n", n, num - 1);
}