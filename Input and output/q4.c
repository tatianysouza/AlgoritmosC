// Programa que lê o número inteiro positivo e calcula o seu dobro, o seu triplo, o seu quadrado, o seu cubo e a sua raiz quadrada.

#include <stdio.h>
#include <math.h>

void main() {
  int num;
  
  printf("Informe um numero: ");
  scanf("%d", & num);
  
  int dobro = num * 2;
  int triplo = num * 3;
  int quadrado = num * 4;
  int cubo = num * num * num;
  float raiz = sqrt(num);
  
  printf("O dobro do eh: %.1d\nO triplo eh: %.1d\nO quadrado eh: %.1d\nO cubo eh: %.1d\nA raiz eh: %.2f", dobro, triplo, quadrado, cubo, raiz);
}