#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int main(void) {

  char nome[11], sexo, est_civil;
  int idade, tamanho_nome;
  float salario;

  
    printf("Digite seu nome: ");
    scanf("%s", nome);
    tamanho_nome = strlen(nome);
  
  while (tamanho_nome <4){

   printf("Nome inválido! Você precisa digitar um nome com 4 ou mais caracteres: ");
   scanf("%s", nome);
   tamanho_nome = strlen(nome);
  }

  printf("Nome válido. \n");

  printf("Digite uma idade: ");
  scanf("%i", &idade);

  while (idade<0 || idade> 150){
   printf("Idade inválida, digite novamente: \n");
   scanf("%i", &idade);

    }
    
    printf("Idade Válida. \n");

    printf("Digite o salário: ");
    scanf("%f", &salario);

    while (salario<0){
     printf("Salário inválido, digite novamente: \n");
     scanf("%f", &salario);

    }
    printf("Salário válido. \n");

    printf("Digite 'F' para sexo feminino ou 'M' para sexo masculino: ");
    scanf("%c", &sexo);

    while (sexo !='F' && sexo !='M'){
      printf("\nSexo inválido, digite novamente: ");
      scanf("%c", &sexo);
    }
    
    printf("\nSexo válido");

    printf("Digite seu estado civil ('s' para solteiro, 'c' para casado, 'v' para viúvo ou 'd' para divorciado): ");
    scanf("%c", &est_civil);

    while (est_civil != 's' && est_civil != 'c'&& est_civil != 'v' && est_civil != 'd'){
      printf("Estado Civil inválido\n");
      printf("Digite seu estado civil ('s' para solteiro, 'c' para casado, 'v' para viúvo ou 'd' para divorciado): ");
     scanf("%c", &est_civil);

    }
     
     







  
  return 0;
}