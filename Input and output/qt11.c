// Programa que lê um valor em real, a cotação atual do dólar e calcula o valor informado pelo usuário em dólares.

#include <stdio.h>

void main() {
  float real, dolar;
  printf("Informe o valor em real: ");
  scanf("%f", & real);
  printf("informe o valor do dolar atualmente: ");
  scanf("%f", & dolar);

  float conversor = real / dolar;

  printf("O valor em dolar eh: %.3f", conversor);
}