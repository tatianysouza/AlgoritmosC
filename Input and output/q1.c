// Programa que lê três números inteiros e calcula a sua média aritmética.

#include <stdio.h>

void main() {
  int num1, num2, num3;
  
  printf("informe o primeiro número: ");
  scanf("%d", & num1);

  printf("Informe o segundo número: ");
  scanf("%d", & num2);

  printf("Informe o terceiro número: ");
  scanf("%d", & num3);
  
  int media = (num1+num2+num3) / 3 ;
  printf("a média dos numeros informados eh %d ", media);
}