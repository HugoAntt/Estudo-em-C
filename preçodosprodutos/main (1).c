/**Faça um programa que pergunte o preço de três produtos e informe qual produto você deve comprar, sabendo que a decisão é sempre pelo mais barato.*/

#include <stdio.h>
#include <stdlib.h>

/*Main(Função principal)*/
int main(void) {

float n1,n2,n3;

printf("Insira o preço do leite: \n");
scanf("%f", &n1);
if(n1<0){
  return 0;
}

printf("Insira o preço do milho: \n");
scanf("%f", &n2);
if(n2<0){
  return 0;
}

printf("Insira o preço do cuscuz: \n");
scanf("%f", &n3);
if(n3<0){
  return 0;
}

 if(n1<n2 && n1<n3){
  printf("O produto mais barato é o leite, custando: R$ %.2f \n", n1);
}

 else if(n2<n1 && n2<n3){
  printf("O produto mais barato é o milho, custando: R$ %.2f \n", n2);
}

 else if(n3<n1 && n3<n2){
  printf("O produto mais barato é o cuscuz, custando: R$ %.2f \n", n3);
}

}

