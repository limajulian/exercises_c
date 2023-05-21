//Descrição do problema: Escreva um programa em C que solicite ao usuário um número inteiro e exiba o dobro desse número.
/* 
Requesitos
  1. O programa deve solicitar ao usuario um numero inteiro
  2. O programa deve exibir o dobro do numero

Solução
  Dividir o algortimo em 3 partes
  1. Entrada dos dados
    a. Exibir uma mensagem solicitando que digite um numero inteiro
    b. Aguardar a entrada do usuario
    c. armazenar o numero inserido em uma variavel
  2. Calcular o dobro deste numero
    a. calcular o dobro da variavel
    b. armazenar o resultado em uma segunda variavel
  3. Exibir do resultado
    a. Exibir o valor resultado na tela
*/

#include <stdio.h>

int main(void) {
  int numero;
  
  //Entrada de dados
  printf("Digite um numero inteiro: ");
  scanf("%d", &numero);
  //calculo do dobro
  numero = numero * 2;
  //Exibir resultados
  printf("Resultado: %d", numero);
  
  return 0;
}
