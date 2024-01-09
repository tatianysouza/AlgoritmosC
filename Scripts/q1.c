// Programa que lê o peso e a altura de uma pessoa e verifica se ela está dentro da faixa de peso adequada, abaixo do peso ou acima do peso. Caso a pessoa esteja fora do peso adequado o programa informa quantos Kg ela deve ganhar ou perder para ficar dentro da faixa adequada. Para resolver este programa, foi considerado que o IMC ideal para uma pessoa deve estar entre 18 e 25.

#include <stdio.h>
#include <math.h>

void main() {
  float peso, altura;
  printf("Informe seu peso: ");
  scanf("%f", &peso);
  printf("Informe sua altura: ");
  scanf("%f", &altura);

  float imc = peso / pow(altura, 2);
  printf("Seu IMC é: %.2f\n", imc);
  
  if (imc < 18) {
    float ideal = (18 * pow(altura, 2) - peso);
    printf("Você deve ganhar %.2f quilos para ficar na faixa de peso ideal.\n", ideal);
  } 
  else if (imc > 25) {
    float ideal = (peso - 25 * pow(altura, 2));
    printf("Você deve perder %.2f quilos para ficar na faixa de peso ideal.\n", ideal);
  } 
  else {
    printf("Você está na faixa de peso ideal.\n");
  }
}