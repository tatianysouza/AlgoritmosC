// Programa em C que lê um número inteiro não negativo e calcula a quantidade mínima de bits para representar esse número na base binária. Por exemplo, o valor do número 8 em binário é 1000, então são necessários pelo menos 4 bits para representá-lo. O valor do número 47 é 101111, então são necessários ao menos 6 bits para representá-lo.

#include <stdio.h>

void main() {
  int numero, cont = 0;
  printf("Digite um número: ");
  scanf("%d", &numero);
  if (numero == 0) {
    cont = 1;
  } 
  else {
    while (numero > 0) {
      cont++;
      numero = numero / 2;
    }
  }
printf("A quantidade de bits necessários é: %d\n", cont);
}