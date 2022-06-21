/**
Supondo que a população de um país A seja da ordem de 80000 habitantes com uma taxa anual de crescimento de 3% e que a população de B seja 200000 habitantes com uma taxa de crescimento de 1.5%. Faça um programa que calcule e escreva o número de anos necessários para que a população do país A ultrapasse ou iguale a população do país B, mantidas as taxas de crescimento.
*/

#include <stdio.h>

  int main(void) {

 float paisA= 80000, paisB= 200000;
 int cont=0;
   
   while(paisA<paisB){
   paisA=paisA*1.03;
   paisB=paisB*1.015;
   cont++;
   }
   printf("Habitantes do País A: %f\n", paisA);
   printf("Habitantes do País B: %f\n", paisB);
   printf("Anos necessários: %i", cont);
   
  
  return 0;
}