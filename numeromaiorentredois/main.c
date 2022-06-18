/**Faça um Programa que peça dois números e imprima o maior deles.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  float n1,n2;

  printf("Digite o primeiro número: \n");
  scanf("%f", &n1);

  printf("Digite o segundo número: \n");
  scanf("%f", &n2);

  if(n1>n2){
    printf("O maior número é: %.2f", n1);
  }

  else if(n2>n1){
     printf("O maior número é: %.2f", n2);
  }

  else{
     printf("Opção inválida, escreva números distintos.");
     return 0;
  }

 
}



