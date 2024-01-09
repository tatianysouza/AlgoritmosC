// Programa que lê um valor em polegadas e o converte para centímetros, considerando que uma polegada equivale a 2.54 cm.

#include <stdio.h>

void main() {
  int polegadas;
  printf("Informe o total de polegadas: ");
  scanf("%d", & polegadas);

  float conversor = polegadas * 2.54;

  printf("O valor em cm eh: %.2f", conversor);
}