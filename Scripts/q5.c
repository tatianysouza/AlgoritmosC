// A matemática prova que números inteiros podem ser representados de maneira única como um produto de potências de números primos distintos. Este produto é chamado de decomposição em fatores primos do número e os expoentes são chamados de multiplicidade do primo respectivo. Por exemplo, 360 = 2x2x2x3x3x5 e 21 = 3x7. Este programa em C que obtem a decomposição em fatores primos de um número inteiro positivo informado pelo usuário. A resposta do programa é informada em várias linhas. Onde cada linha tem o formato “a ^ n”, no qual "a" representa o fator e "n" representa o número de vezes que ele deve ser usado. Alguns exemplos de saída podem ser vistos abaixo:
// Número = 360 (2x2x2x3x3x5)
// Resposta: 
// 2 ^ 3
// 3 ^ 2
// 5 ^ 1
// Número = 21 (3x7)
// Resposta:
// 3 ^ 1
// 7 ^ 1
// Número = 12 (2x2x3)
// 2 ^ 2
// 3 ^ 1
#include <stdio.h>

void main() {
  int numero, fator = 2, multiplicidade = 0;

  printf("Digite um numero inteiro: ");
  scanf("%d", &numero);

  printf("Decomposicao em fatores primos de %d:\n", numero);

  while (numero > 1) {
    if (numero % fator == 0) {
      multiplicidade++;
      numero /= fator;
    } 
    else {
      if (multiplicidade > 0) {
        printf("%d^%d\n", fator, multiplicidade);
        multiplicidade = 0;
      }
      fator++;
    }
  }

  if (multiplicidade > 0) {
    printf("%d^%d\n", fator, multiplicidade);
  }
}
