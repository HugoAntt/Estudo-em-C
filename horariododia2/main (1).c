/**Faça um Programa que pergunte em que turno você estuda. Peça para digitar M-matutino ou V-Vespertino ou N-Noturno. Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Main(Função principal)*/
int main(void) {

char l1[11];

char m1[] = {"matutino"};
char m2[] = {"M"};

char v1[] = {"vespertino"};
char v2[] = {"V"};

char n1[] = {"noturno"};
char n2[] = {"N"};
 

printf("Insira o horário que você estuda dentre as opções: \n");
printf("M ou matutino \n");
printf("V ou vespertino \n");
printf("N ou noturno\n");
scanf ("%s",l1);

int result, invalid=0;


/*1° sequência comparativa */
result= strcmp(l1, m1);
if(result==0){
  printf("Bom dia!");
  invalid=1;
}
/*2° parte da 1° sequência comparativa */
result= strcmp(l1, m2);
if(result==0){
  printf("Bom dia!");
  invalid=1;
}

/*2° sequência comparativa */
result= strcmp(l1, v1);
if(result==0){
  printf("Boa tarde!");
  invalid=1;
}
/*2° parte da 2° sequência comparativa */
result= strcmp(l1, v2);
if(result==0){
  printf("Boa tarde!");
  invalid=1;
}

/*3° sequência comparativa */
result= strcmp(l1, n1);
if(result==0){
  printf("Boa noite!");
  invalid=1;
}
/*2° parte da 3° sequência comparativa */
result= strcmp(l1, n2);
if(result==0){
  printf("Boa noite!");
  invalid=1;
}

if(invalid==0){
  printf("Inválido");
  return 0;
}

}



