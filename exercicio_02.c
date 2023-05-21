/*
Escreva um programa em C que determine se um número é positivo, negativo ou zero.
Requesitos
1. Solicitar o numero ao usuario
2. Decidir se o numero é negativo, positivo ou zero
3. exibir a conclusão do passo 2
*/

#include <stdio.h>

int main(void) {
  //declaração de variaveis
  int numero;

  //Entrada de dados
  printf("Digite um numero: ");
  scanf("%d", &numero);

  //analise do numero e saida do resultado
  if(numero > 0){
    printf("O numero é positivo");
  } else if (numero < 0) {
    printf("O numero é negativo");
  } else {
    printf("O numero é igual a zero");
  }
  
  
  return 0;
}
