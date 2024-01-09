// A matemática prova que números inteiros podem ser representados de maneira única como um produto de potências de números primos distintos. Este produto é chamado de decomposição em fatores primos do número e os expoentes são chamados de multiplicidade do primo respectivo. Por exemplo, 360 = 2x2x2x3x3x5 e 21 = 3x7. Com base nessas informações, escreva um programa em C que obtenha a decomposição em fatores primos de um número inteiro positivo informado pelo usuário.
#include <stdio.h>

void main() {
  int numero, divisor = 2;
    
  printf("Digite um número inteiro positivo: ");
  scanf("%d", &numero);
    
  printf("Decomposição em fatores primos de %d = ", numero);
  if (numero == 1){
    printf("1");
  }
  while (numero > 1) {
    if (numero % divisor == 0) {
      printf("%d", divisor);
      numero =numero/ divisor;
      if (numero > 1) {
        printf("x");
      }
    }
    else {
      divisor++;
    }
  }
}
