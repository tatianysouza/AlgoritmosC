// Programa que lê três números e seus respectivos pesos e calcula a sua média ponderada.

#include <stdio.h>

void main() {
  float num1, num2, num3, p1, p2, p3;
  
  printf("informe o primeiro número: ");
  scanf("%f", & num1);

  printf("informe o peso do primeiro numero: ");
  scanf("%f", & p1);

  printf("Informe o segundo número: ");
  scanf("%f", & num2);

  printf("informe o peso do segundo numero: ");
  scanf("%f", & p2);
  
  printf("Informe o terceiro número: ");
  scanf("%f", & num3);

  printf("informe o peso do primeiro numero: ");
  scanf("%f", & p3);
  
  float media = (num1 * p1 + num2 * p2 + num3 * p3) / (p1 + p2 + p3);
  printf("a média ponderada dos numeros informados eh %.2f ", media);
}