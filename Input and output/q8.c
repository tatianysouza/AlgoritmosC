// Programa que lê o valor de uma temperatura em Celsius e calcula o seu valor correspondente em Fahrenheit e em Kelvin.

#include <stdio.h>

void main() {
  float temperatura;
  
  printf("Informe a temperatura C°: ");
  scanf("%f", & temperatura);
  
  float fahrenheit = temperatura * 1.8 + 32;
  float kelvin = temperatura + 273.15;

  printf("Temperatura em Fahrenheit: %.2f\nTemperatura em Kelvin: %.2f", fahrenheit, kelvin);
}