// 257. Subprograma recursivo que recebe dois números inteiros correspondentes aos valores da base e do expoente e calcula o valor da potenciação.
#include <stdio.h>

int potencia(int n, int expo) {
  if (expo == 1) {
    return n;
  } 
  return potencia(n, expo -1) * n;
}

void main() {
  int n, expo;
  printf("Digite o número: ");
  scanf("%d", &n);

  printf("Digite o expoente: ");
  scanf("%d", &expo);

  int termo = potencia(n, expo);
  printf("Sua potencia eh: %d\n", termo);
}
