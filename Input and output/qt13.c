// Programa que lê um valor em KB e calcula o seu valor correspondente em bits, bytes, MB e GB.

int main() {
  float tamanhokb;
  
  printf("Digite um valor em KB: ");
  scanf("%f", & tamanhokb);
  
  float bits = tamanhokb * 8 * 1024;
  float bytes = tamanhokb * 1024;
  float megab = tamanhokb / 1024;
  float gigab = tamanhokb / (1024 * 1024);
  
  printf("O valor em bits é: %.2f\nO valor em bytes é: %.2f\nO valor em MB é: %.3f\nO valor em GB é: %f\n", bits, bytes, megab, gigab);
}
