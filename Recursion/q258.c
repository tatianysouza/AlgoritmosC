// 258. Subprograma recursivo que recebe um valor em decimal e imprime o seu valor correspondente em binário.
#include <stdio.h>

int binario(int n) {
  if (n == 1 || n==0) {
    printf("%d", n);
  } 
  else if(n>1){
    binario(n/2);
    printf("%d", n%2);
  }
}

void main() {
  int n, expo;
  printf("Digite o número: ");
  scanf("%d", &n);
  binario(n);

}
