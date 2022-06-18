/**A partir do salario de uma pessoa, acrescentar uma comissao de 2% sobre o salário base, depois calcular um desconto de 12% sobre este valor
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

float salario;

printf("Digite: \n"); 
scanf("%f", &salario);

salario=salario*1.02;
salario=salario*0.88;

printf("Seu salário atual é: %.2f", salario);


}
