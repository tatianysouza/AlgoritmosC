// Programa que lê um número inteiro e informa o seu antecessor e o seu sucessor.

#include <stdio.h>

void main() {
  int num;
  
  printf("Informe um número: ");
  scanf("%d", & num);
  
  int antecessor = num - 1;
  int sucessor = num + 1;
  
  printf("O antecessor eh: %d\nO sucessor eh: %d", antecessor, sucessor);
}