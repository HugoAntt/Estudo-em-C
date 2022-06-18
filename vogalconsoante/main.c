/**Faça um Programa que verifique se uma letra digitada é vogal ou consoante.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  char letra;

  printf("Digite uma letra: \n ");
  scanf("%c", &letra);

  /* condição para minúscula */
  if(letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u'){
    printf("É uma vogal.");
  }

  /* condição para maiúscula */
  else if(letra=='A' || letra=='E' || letra=='I' || letra=='O' || letra=='U'){
    printf("É uma vogal.");
  }

  else{
    printf("É uma consoante.");
  }
 
}