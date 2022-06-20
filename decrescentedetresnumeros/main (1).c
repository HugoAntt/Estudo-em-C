/**Faça um Programa que leia três números e mostre-os em ordem decrescente.
*/

#include <stdio.h>
#include <stdlib.h>

/*Main(Função principal)*/
int main(void) {

float n1,n2,n3;
/*Variavéis para as determinações.*/
float low, mid, high;

printf("Insira o primeio número: \n");
scanf("%f", &n1);

printf("Insira o segundo número: \n");
scanf("%f", &n2);

printf("Insira o terceiro número: \n");
scanf("%f", &n3);

/* Primeira sequência */
if(n1>n2 && n1>n3){
  high=n1;

 if(n2>n3){
  mid=n2;
  low=n3;
  }
 else if(n3>n2){
  mid=n3;
  low=n2;
  }
}
 /* Segunda sequência */
else if(n2>n1 && n2>n3){
  high=n2;

 if(n1>n3){
  mid=n1;
  low=n3;
}
 else if(n3>n1){
  mid=n3;
  low=n1; 
 }
}
  /* Terceira sequência */
 else if(n3>n1 && n3>n2){
  high=n3;

 if(n1>n2){
  mid=n1;
  low=n2;
}
else if(n2>n1){
  mid=n2;
  low=n1;
 }
}

/* Resultados */
printf("Na ordem decrescente, temos: \n");
printf("%.f\n", high);
printf("%.f\n", mid);
printf("%.f\n", low);
}
