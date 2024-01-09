// Programa que lê o valor da base e da altura de um triângulo e calcula a sua área.

#include <stdio.h>

void main() {
  float base, altura;
  
  printf("Informe o valor da base: ");
  scanf("%f", & base);

  printf("Informe o valor da altura: ");
  scanf("%f", & altura);
  
  float area = (base*altura) / 2;

  printf("A area do triangulo informado eh: %.2f", area);
}