// Programa que lê o valor dos dois catetos de um triângulo retângulo e calculA o valor da hipotenusa.

#include <stdio.h>
#include <math.h>

void main() {
  float catetoo, catetoa;
  printf("Informe o cateto oposto: ");
  scanf("%f", & catetoo);
  printf("informe o cateto adjascente: ");
  scanf("%f", & catetoa);

  float hipotenusa = (catetoo * catetoo) + (catetoa * catetoa);
  float resultado = sqrt(hipotenusa);

  printf("A hipotenusa eh: %.1f", resultado);
}