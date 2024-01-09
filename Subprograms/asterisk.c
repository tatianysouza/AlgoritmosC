// Programa em C que imprime uma figura composta por asteriscos.
#include <stdio.h>

void imprimirFigura(int n) {
  if (n <= 0) {
    return;
  }
  imprimirFigura(n - 1);
  for (int i = 0; i < n; i++) {
    printf("*");
  }
  printf("\n");
}

int main() {
  int numero;
  printf("Digite um número inteiro positivo: ");
  scanf("%d", &numero);
  imprimirFigura(numero);
  return 0;
}
