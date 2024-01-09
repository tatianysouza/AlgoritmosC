// Programa que lê o valor de uma distância percorrida em km e o tempo gasto em horas e calcula a velocidade média em m/s.

#include <stdio.h>

void main() {
  float kilometros, tempo;
  printf("Informe a kilometragem percorrida: ");
  scanf("%f", & kilometros);
  printf("informe o tempo gasto em horas: ");
  scanf("%f", & tempo);

  float velocidade = kilometros / tempo ;
  float conversor = velocidade / 3.6;

  printf("A velocidade em m/s eh: %.3f", conversor);
}