// Programa que lê o valor do raio de uma circunferência e calcula a sua área e o seu comprimento.

#include <stdio.h>

void main() {
  float raio;
  
  printf("Informe o raio da circunferencia: ");
  scanf("%f", & raio);
  
  float area = 3.1415 * (raio * raio);
  float comprimento = 2 * 3.1415 * raio;
  
  printf("O raio eh: %.2f\nO comprimento eh: %.2f", area, comprimento);
}