#include <stdio.h>

int main() {
  int valor, saque, cedulas100 = 0, cedulas50 = 0, cedulas20 = 0, cedulas10 = 0, totalSaque = 0;
  do {
    printf("\nDigite o valor a ser sacado (ou 0 para sair): ");
    scanf("%d", &valor);
    if (valor != 0) {
      saque = valor;
      if (saque % 10 != 0) {
        printf("Valor inválido! O valor deve ser múltiplo de 10.\n");
      } 
      else {
        while (saque >= 100) {
          cedulas100++;
          saque -= 100;
        }
        while (saque >= 50) {
          cedulas50++;
          saque -= 50;
        }
        while (saque >= 20) {
          cedulas20++;
          saque -= 20;
        }
        while (saque >= 10) {
          cedulas10++;
          saque -= 10;
        }
        totalSaque += valor;
        printf("Quantidade de cédulas entregues:\n");
        printf("Cédulas de R$ 100,00: %d\n", cedulas100);
        printf("Cédulas de R$ 50,00: %d\n", cedulas50);
        printf("Cédulas de R$ 20,00: %d\n", cedulas20);
        printf("Cédulas de R$ 10,00: %d\n", cedulas10);
      }
    }
  } 
  while (valor != 0);
  printf("\nSoma de todos os saques realizados: R$ %d,00\n", totalSaque);
}