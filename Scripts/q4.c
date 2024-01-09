// Programa em C que lê inicialmente o termo inicial e a razão de uma progressão aritmética. Depois disso, o programa lê um número N e verifica se o número N pertence (ou não) à progressão informada pelo usuário. Todos os valores são lidos como números inteiros e assumindo que a razão vai ser sempre um número inteiro positivo. Para você relembrar, seguem abaixo alguns exemplos de progressão aritmética:
// a1 = 3 e r = 2: 3, 5, 7, 9, 11, 13, 15, ....
// a1 = 2 e r = 4: 2, 6, 10, 14, 18, 22, ...
// a1 = 0 e r = 5: 0, 5, 10, 15, 20, 25, 30, ....

#include <stdio.h>

void main(){
  int inicio, razao, numero;
  printf("Informe onde começa a progressão: ");
  scanf("%d", &inicio);
  printf("Informe a razão da progressão: ");
  scanf("%d", &razao);
  printf("Informe o numero para verificar se está na progressão: ");
  scanf("%d", &numero);
  if(numero > inicio){
    int atual = inicio;
    while (atual <= numero) {
      if (atual == numero) {
        printf("%d pertence a progressao.\n", numero);
      }
      atual += razao;
    }
    printf("Não faz parte da progressão: ");
  }
}