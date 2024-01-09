// Programa em C para correção de respostas de candidatos.
#include <stdio.h>

#define NUM_QUESTOES 10

void lerRespostas(char respostas[]) {
  printf("Digite as respostas do gabarito (letras a, b, c, d ou e):\n");

  for (int i = 0; i < NUM_QUESTOES; i++) {
    printf("Questão %d: ", i + 1);
    scanf(" %c", &respostas[i]);
  }
}

void imprimirRespostas(char respostas[]) {
  printf("Gabarito:\n");
  for (int i = 0; i < NUM_QUESTOES; i++)
    printf("Questão %d: %c\n", i + 1, respostas[i]);
}

int calcularAcertos(char gabarito[], char respostas[]) {
  int acertos = 0;
  for (int i = 0; i < NUM_QUESTOES; i++) {
    if (gabarito[i] == respostas[i])
      acertos++;
  }

  return acertos;
}

int main() {
  char gabarito[NUM_QUESTOES];
  char respostas[NUM_QUESTOES];
  int acertos;
  lerRespostas(gabarito);
  imprimirRespostas(gabarito);
  printf("\n");

  for (int i = 1; i <= 3; i++) {
    printf("Digite as respostas do candidato %d:\n", i);
    lerRespostas(respostas);
    acertos = calcularAcertos(gabarito, respostas);
    printf("Cartão de respostas do candidato %d:\n", i);
    imprimirRespostas(respostas);
    printf("Número de acertos do candidato %d: %d\n", i, acertos);

    printf("\n");
  }

  return 0;
}
