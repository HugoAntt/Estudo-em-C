/* Individual. Criar um fluxograma para entrar com notas na forma de matriz, de 5 por 3, utilizando funções. */

#include <stdio.h>
#include <stdlib.h>

  void FuncaoMatriz(){
  int valores[5][3];
  int n1=0;
 
 for(int i = 0;i <=4 ;i++){
   for(int j = 0; j <=2 ; j++){
   
    printf("Digite a nota %i do aluno %i\n" ,j+1, i+1);

    scanf("%i", &valores[i][j]);
     }
    
  }
 
 }
  int main() {
 printf("Notas:\n");
  FuncaoMatriz();
  }