// Programa que lê o valor do lado de um quadrado e calcula a sua área e o seu perímetro.

#include <stdio.h>

void main() {
  float lado;
  
  printf("Informe o lado do quadrado: ");
  scanf("%f", & lado);
  
  float area = lado * lado;
  float perimetro = lado * 4;
  
  printf("A area do quadrado informado eh %.1f e seu perimetro eh %.1f ", area, perimetro);
}