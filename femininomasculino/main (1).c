/**  Faça um Programa que verifique se uma letra digitada é "F" ou "M". Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  char letra;

  printf("Digite a letra para identificação do sexo: \n");
  scanf("%c", &letra);

  if(letra=='f' || letra=='F'){
    printf("Feminino");
  }

   else if(letra=='m' || letra=='M'){
    printf("Masculino");
  }
   
   else{
     printf("Sexo inválido");
     return 0;
     
   }

}