// Programa que lê um número inteiro positivo N e imprime os N primeiros números pares positivos.

#include <stdio.h>

void main(){
  int quantidade, k;
  printf("informe um numero: ");
  scanf("%d", &quantidade);
  for(k=2; k<= quantidade*2; k+=2){
    printf("%d ",k);
  }
}