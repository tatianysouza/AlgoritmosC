// 251. Subprograma recursivo que recebe um número inteiro não negativo e calcula o seu fatorial.
#include <stdio.h>

int fatorial(int n){
  if (n==0){
    return 1;
  }
  return fatorial(n-1) * n;
}

void main(){
  int n, fator;
  printf("Informe um numero: ");
  scanf("%d", &n);
  printf("O seu fatorial eh: ");
  fator = fatorial(n);
  printf("%d", fator);
}