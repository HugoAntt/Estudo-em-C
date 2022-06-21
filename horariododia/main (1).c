/**Faça um Programa que pergunte em que turno você estuda. Peça para digitar M-matutino ou V-Vespertino ou N-Noturno. Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Main(Função principal)*/
int main(void) {
int x=0;
char l1;

 
printf("Insira o horário que você estuda dentre as opções: \n");
printf("M para matutino \n");
printf("V para vespertino \n");
printf("N para noturno\n");
scanf ("%s", &l1);

if(l1 == 'M' || l1 == 'm'){
  printf("Bom dia!");
  return 0;
}
else{
  printf("Inválido");
  return 0;
 }

if(l1 == 'V' || l1 == 'v'){
  printf("Boa tarde!"); 
  return 0;
}
else{
  printf("Inválido");
  return 0;
 }

if(l1 == 'N' || l1 == 'n'){
  printf("Boa noite!");
  return 0;
}
else{
  printf("Inválido");
  return 0;
 }
}
