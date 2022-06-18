/**Faça um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular a média alcançada por aluno e apresentar:
A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
A mensagem "Reprovado", se a média for menor do que sete;
A mensagem "Aprovado com Distinção", se a média for igual a dez.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  float n1, n2, media;

/*fase da primeira nota*/
  printf("Digite a primeira nota: \n");
  scanf("%f", &n1);

  /*fase da segunda nota*/
  printf("Digite a segunda nota: \n");
  scanf("%f", &n2);

  /*Cálculo da média*/
  media=(n1+n2)/2;

 if(media>=7 && media<10){
    printf("Aprovado.");
  }

 else if(media==10){
    printf("Aprovado com distinção.");
  }

  else{
    printf("Reprovado");
  }

}