/*
Escreva um programa em C que verifique se um número fornecido pelo usuário é
primo. Um número é primo, quando divisível apenas por 1 e ele mesmo. 

Para solucionar o problema, precisamos criar um algoritmo que verifique o intervalo de números positivos diferentes de 1 e menores que variavel número.

Solução
Declarar variáveis "numero, resto, i" do tipo inteiro
Entrantar com número inteiro atravez do teclado e salvar em variável número

Encontrar Solução analisando o resto da divisão do número é seus antecessores
positivos diferentes de 1

Criar laço de repetição for
  Se algum número dentro do intervalo "2 e número-1" retornar resto 0, escrever
número não é primo, return 0; para finalizar

Se o algoritmo saiu do for sem entrar na condição, então o número é primo

*/

#include <stdio.h>

int main(void) {
  // Declaração de variaveis
  int numero, resto, i;
  // Entrada de dados
  printf("Digite um numero inteiro: ");
  scanf("%d", &numero);
  // Solução
  for (i = 2; i < numero; i++) {
    resto = numero % i;
    if (resto == 0) {
      printf("O número não é primo");
      return 0;
    }
  }
  printf("O número é primo");
  return 0;
}
