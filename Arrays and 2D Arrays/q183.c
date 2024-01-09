// 183. Programa que lê uma matriz quadrada de ordem 5 de números reais e a seguir leia um número inteiro N entre 1 e 5 e calcule a soma de todos os elementos da linha N.
#include <stdio.h>
const int ordem = 5;

void main() {
  int mat[ordem][ordem], k, j, num, soma=0;
  for (k = 0; k < ordem; k++) {
    for (j = 0; j < ordem; j++) {
      printf("Informe um numero: ");
      scanf("%d", &mat[j][k]);
    }
  }
  printf("Informe um numero entre 1-5: ");
  scanf("%d", &num);
  for (k = num-1; k == num-1; k++) {
    for(j=0; j<ordem; j++){
      soma=soma+mat[j][k];
    }
  }
  printf("a soma da linha %d eh %d", num, soma);  
}