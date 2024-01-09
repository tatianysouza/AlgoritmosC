//Programa em C que lê um valor em segundos e o imprime no formato X horas, Y minutos, Z segundos.

#include <stdio.h>

int main() {
  int segundos;
  printf("Informe o total de segundos: ");
  scanf("%d", &segundos);

  int horas = segundos / 3600;
  int minutos = (segundos % 3600) / 60;
  segundos = segundos % 60;
  printf("%d horas, %d minutos, %d segundos\n", horas, minutos, segundos);
}