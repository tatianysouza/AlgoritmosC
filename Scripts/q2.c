//Programa em C que imprime todos os palíndromos que existem no intervalo [1000, 9999].

#include <stdio.h>

void main() {
  int k;
  printf("Palíndromos no intervalo [1000, 9999]:\n");

  for (int k = 1000; k <= 9999; k++) {
    int original = k;
    int reverso = 0;

    while (original > 0) {
      reverso = reverso * 10 + original % 10;
      original /= 10;
    }

    if (reverso == k) {
      printf("%d\n", k);
    }
  }
}
