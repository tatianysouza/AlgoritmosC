// Programa que lê uma palavra e calcule o seu comprimento.

#include <stdio.h>
#include <string.h>

void main() {
   char palavra[1000];
   printf("Digite uma palavra: ");
   scanf("%s", palavra);
   int comprimento = strlen(palavra);
   printf("O comprimento da palavra é %d.\n", comprimento);
}