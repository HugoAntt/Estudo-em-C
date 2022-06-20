/**Faça um Programa que leia três números e mostre o maior deles.*/

#include <stdio.h>
#include <stdlib.h>

/*Main(Função principal)*/
int main(void) {

float n1,n2,n3;

printf("Insira o primeio número: \n");
scanf("%f", &n1);

printf("Insira o segundo número: \n");
scanf("%f", &n2);

printf("Insira o terceiro número: \n");
scanf("%f", &n3);

if(n1>n2 && n1>n3){
  printf("O maior número é: %.f \n", n1);
}

 else if(n2>n1 && n2>n3){
  printf("O maior número é: %.f \n", n2);
}

 else if(n3>n1 && n3>n2){
  printf("O maior número é: %.f \n", n3);
}

}

