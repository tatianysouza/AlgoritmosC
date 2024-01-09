#include <stdio.h>
#include <string.h>
const int questoes = 10;
void main() {
  char vetgab[questoes], vetresp[questoes];
  int k, cont= 0;
  printf("Digite o gabarito da prova:\n");
  scanf("%s", vetgab);

  printf("Digite as respostas do candidato:\n");
  scanf("%s", vetresp);
  for (int k = 0; k < questoes; k++) {
    if (vetgab[k] == vetresp[k]) {
      cont++;
    }
  }
  printf("O candidato acertou %d/10 questoes.\n", cont);
}