#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[]){

  // Declaração de variáveis
  int a, b, c;

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o primeiro valor: ");
  scanf("%i", &a);

  printf("Digite o segundo valor: ");
  scanf("%i", &b);

  printf("Digite o terceiro valor: ");
  scanf("%i", &c);

  a = a * a;
  b = b * b;
  c = c * c;

  if(a == b + c){
      printf("Esses valores formam um triangulo.");
  }  
  else if(b == a + c){
      printf("Esses valores formam um triangulo.");
  } 
  else if(c == a + b){
      printf("Esses valores formam um triangulo.");
  } 
  else
    printf("Esses valores nao formam um triangulo.");

}