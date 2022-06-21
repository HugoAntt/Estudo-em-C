/**
Altere o programa anterior permitindo ao usuário informar as populações e as taxas de crescimento iniciais. Valide a entrada e permita repetir a operação.
*/

#include <stdio.h>
#include <stdlib.h>

  int main(void) {

 float paisA, paisB;
 int cont=0;
   
  printf("Digite a quantidade de habitantes do País A: \n");
  scanf("%f", &paisA);
  printf("Digite a quantidade de habitantes do País B: \n");
  scanf("%f", &paisB);

   while(paisA<paisB){
   paisA=paisA*1.03;
   paisB=paisB*1.015;
   cont++;
   }
   printf("Habitantes do País A atualmente: %f\n", paisA);
   printf("Habitantes do País B atualmente: %f\n", paisB);
   printf("Anos necessários: %i", cont);
   
  
  return 0;
}