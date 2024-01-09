// Programa em C que implementa uma pilha e converte um número inteiro para binário.

#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nodo da pilha.
typedef struct nodo {
  int numero;
  struct nodo *proximo;
} nodo;

// Definição da estrutura da pilha.
typedef struct {
  nodo *topo;
} pilha;

// Função para criar uma nova pilha.
pilha *criarpilha() {
  pilha *p = (pilha *)malloc(sizeof(pilha));
  p->topo = NULL;
  return p;
}

// Função para adicionar um elemento à pilha.
void push(pilha *p, int n) {
  nodo *novo = (nodo *)malloc(sizeof(nodo));
  novo->numero = n;
  novo->proximo = p->topo;
  p->topo = novo;
}

// Função para remover e obter o elemento do topo da pilha.
int pop(pilha *p) {
  nodo *aux = p->topo;
  int resultado = aux->numero;
  p->topo = aux->proximo;
  free(aux);
  return resultado;
}

// Função para verificar se a pilha está vazia.
int estavazia(pilha *p) {
  if (p->topo == NULL) {
    return 1;
  }
  return 0;
}

// Função para imprimir a representação binária de um número inteiro.
void imprimirBinario(int numero) {
  pilha *p = criarpilha();
  if (numero == 0) {
    push(p, 0);
  } 
  else {
    while (numero > 0) {
      int bit = numero % 2;
      push(p, bit);
      numero = numero / 2;
    }
  }
  printf("O valor em binário é: ");
  while (estavazia(p) != 1) {
    int bit = pop(p);
    printf("%d", bit);
  }
  printf("\n");
  free(p);
}

// Função principal que recebe um número inteiro do usuário e chama a função de conversão para binário.
int main() {
  int numero;
  printf("Informe um número inteiro: ");
  scanf("%d", &numero);
  imprimirBinario(numero);
  return 0;
}
