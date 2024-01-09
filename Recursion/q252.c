// 252. Subprograma recursivo que recebe dois números inteiros M e N e calcula a soma de todos os números do intervalo [M, N].
#include <stdio.h>

int somaIntervalo(int min, int max){
  if (min==max){
    return min;
  }
  return somaIntervalo(min+1, max) +min;
}

void main(){
  int min, max, soma;
  printf("Informe um numero: ");
  scanf("%d", &min);
  printf("Informe outro numero: ");
  scanf("%d", &max);
  printf("A soma do intervalo eh: ");
  soma = somaIntervalo(min, max);
  printf("%d", soma);
}