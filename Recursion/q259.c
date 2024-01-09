// 259. Subprograma recursivo que recebe um valor em decimal e imprime o seu valor correspondente em hexadecimal.
#include <stdio.h>

void hexadecimal(int decimal) {
  if (decimal > 0) {
    hexadecimal(decimal / 16);
    int resto = decimal % 16;
    if (resto < 10) {
      printf("%d", resto);
    } 
    else {
      printf("%c", 'A' + (resto - 10));
    }
  }
}

int main() {
  int decimal;
  printf("Digite um valor decimal: ");
  scanf("%d", &decimal);
  printf("O valor correspondente em hexadecimal é: ");
  hexadecimal(decimal);
  printf("\n");
}
