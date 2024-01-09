#include <stdio.h>
const int questoes = 10;
void main() {
  char vetgab[questoes], vetresp[questoes];
  printf("Digite o gabarito da prova:\n");
  scanf("%s", vetgab);

  printf("Digite as respostas do candidato:\n");
  scanf("%s", vetresp);
  int acertos = 0;
  for (int i = 0; i < questoes; i++) {
    if (vetgab[i] == vetresp[i]) {
      acertos++;
    }
  }
  printf("O candidato acertou %d/10 questoes.\n", acertos);
}
