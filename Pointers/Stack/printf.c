// Programa em C que implementa uma pilha e imprime os números informados na ordem original.
#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
  int numero;
  struct nodo *proximo;
} nodo;

typedef struct {
  nodo *topo;
} pilha;

pilha *criarpilha() {
  pilha *p = (pilha *)malloc(sizeof(pilha));
  p->topo = NULL;
  return p;
}

void push(pilha *p, int n) {
  nodo *novo = (nodo *)malloc(sizeof(nodo));
  novo->numero = n;
  novo->proximo = p->topo;
  p->topo = novo;
}

int pop(pilha *p) {
  nodo *aux = p->topo;
  int resultado = aux->numero;
  p->topo = aux->proximo;
  free(aux);
  return resultado;
}

int estavazia(pilha *p) {
  if (p->topo == NULL) {
    return 1;
  }
  return 0;
}

void numeros(pilha *p) {
  nodo *atual = p->topo;
  while (atual != NULL) {
    printf("%d ", atual->numero);
    atual = atual->proximo;
  }
}

int main() {
  pilha *p = criarpilha();
  int n;
  printf("Informe um número: ");
  scanf("%d", &n);
  while (n != 0) {
    push(p, n);
    printf("Informe outro: ");
    scanf("%d", &n);
  }
  numeros(p);
  return 0;
}
