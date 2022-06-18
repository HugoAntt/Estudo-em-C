/**Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  float n1;

  printf("Digite o número: \n");
  scanf("%f", &n1);


  if(n1>=0){
    printf("Positivo");
  }

  else{
    printf("Negativo");
  }

 
}