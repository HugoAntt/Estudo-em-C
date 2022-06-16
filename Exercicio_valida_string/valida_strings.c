/**Faça um programa que leia e valide as seguintes informações:
Nome: maior que 3 caracteres;
Idade: entre 0 e 150;
Salário: maior que zero;
Sexo: 'f' ou 'm';
Estado Civil: 's', 'c', 'v', 'd';
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

 char name[41], sex[2], status[2];
 float wage;
 int age, size;
 //Variáveis para o recebimento da comparação de strings
 int re1, re2, re3, re4, re5, re6, re7, re8;

 //Declaração das variáveis de comparação - sex
 char f[]= ("f");
 char F[]= ("F");

 char m[]= ("m");
 char M[]= ("M");

 //Declaração das variáveis de comparação - status
 char s[]= ("s");
 char S[]= ("S");

 char c[]= ("c");
 char C[]= ("C");

 char d[]= ("d");
 char D[]= ("D");

 char v[]= ("v");
 char V[]= ("V");

//Processo - Nome
 printf("Digite seu nome: \n");
 fgets(name,41,stdin);

/*Alocar o tamanho da string lida.*/
 size= strlen(name);

//Verificação - Nome
while(size<=4){
  printf("Digite um nome com mínimo de 4 caracteres: \n");
  fgets(name,41,stdin);
  size= strlen(name);
}

printf("Digite sua idade: \n");
scanf("%i", &age);

//Verificação - Idade
while(age<0 || age>150){
  printf("Digite uma idade entre 0 e 150: \n");
  scanf("%i", &age);
}

printf("Digite seu salário: \n");
scanf("%f", &wage);

//Verificação - Salário
while(wage<0){
 printf("Digite um valor positivo: \n");
 scanf("%f", &wage);
}
printf("Digite seu sexo: \n");
scanf("%s", sex);

//Comparação das Strings - sex
re1= strcmp(sex, f);
re2= strcmp(sex, F);
re3= strcmp(sex, m);
re4= strcmp(sex, M);

//Verificação - Sexo
while(re1 != 0 && re2 != 0 && re3 != 0 && re4 != 0){ 
  printf("Digite entre F e M: \n");
  scanf("%s", sex);
  re1= strcmp(sex, f);
  re2= strcmp(sex, F);
  re3= strcmp(sex, m);
  re4= strcmp(sex, M);
}

printf("Digite seu estado civil: \n");
scanf("%s", status);

//Comparação das Strings - status
re1= strcmp(status, s);
re2= strcmp(status, S);
re3= strcmp(status, c);
re4= strcmp(status, C);
re5= strcmp(status, d);
re6= strcmp(status, D);
re7= strcmp(status, v);
re8= strcmp(status, V);

//Verificação - Estado civil
while(re1 != 0 && re2 != 0 && re3 != 0 &&re4 != 0 && re5 != 0 && re6 != 0 && re7 != 0 && re8 != 0){
  printf("Digite um estado civil válido: \n");
  scanf("%s", status);
  re1= strcmp(status, s);
  re2= strcmp(status, S);
  re3= strcmp(status, c);
  re4= strcmp(status, C);
  re5= strcmp(status, d);
  re6= strcmp(status, D);
  re7= strcmp(status, v);
  re8= strcmp(status, V);
}


 
  return 0;
}