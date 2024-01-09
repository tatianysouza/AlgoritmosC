// 180. Programa que lê uma matriz quadrada de ordem 5 de números inteiros e um inteiro N e verifica quantas vezes o número N aparece dentro da matriz.
#include <stdio.h>
const int ordem = 5;

void main() {
  int mat[ordem][ordem], k, j, cont=0;
  for (k = 0; k < ordem; k++) {
    for (j = 0; j < ordem; j++) {
      printf("Informe um numero: ");
      scanf("%d", &mat[j][k]);
    }
  }
  for (k = 0; k < ordem; k++) {
    for(j=0; j<ordem; j++ ){
      if(mat[j][k]==5){
        cont++;
      }
    }  
  }
  printf("A matriz tem o numero 5 repetido %d vezes", cont);
}