// Programa em C que calcula o Mínimo Múltiplo Comum (MMC) de três números inteiros positivos.
#include <stdio.h>

int encontrarDivisor(int a, int b, int c, int divisor) {
  if (divisor <= 1) {
    return 1;
  }
  if (a % divisor == 0 || b % divisor == 0 || c % divisor == 0) {
    return divisor;
  }
  return encontrarDivisor(a, b, c, divisor - 1);
}

int calcularMMC(int a, int b, int c) {
  int divisor = encontrarDivisor(a, b, c, a);
  return (a * b * c) / divisor;
}

int main() {
  int num1, num2, num3;
  printf("Digite três números inteiros positivos:\n");
  scanf("%d %d %d", &num1, &num2, &num3);
  int mmc = calcularMMC(num1, num2, num3);
  printf("O Mínimo Múltiplo Comum (MMC) de %d, %d e %d é: %d\n", num1, num2, num3, mmc);
  return 0;
}
