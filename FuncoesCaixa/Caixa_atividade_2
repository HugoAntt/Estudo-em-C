/*É muito comum a escolha de opções em sistemas, como por exemplo, em menus para sistemas de caixas de autoatendimento 24 horas. Descreva uma situação problema da sua escolha, que tenha a escolha de uma opção dentre umas 5 a 10, faça o algoritmo ( fluxograma ) e implemente o código com uso de funções. Podem ser funções simples que executem simples operações e/ou mostrem mensagens/resultados.
 */

#include <stdio.h>
#include <stdlib.h>
// Acrescimo de nova biblioteca para aceitar operações que antes não o faziam.
#include <math.h>

int menu(int select)
{

    printf("\nBem-vindo ao caixa!\n");
    printf("\nSelecione a operação a ser utilizada: \n");

    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("5 - Desconto\n");
    printf("6 - Juros\n");
    printf("7 - Porcentagem\n");
    printf("8 - Potência\n");
    printf("9 - Raiz quadrada\n");

    scanf("%d", &select);

    while (select < 1 || select > 9)
    {
        printf("Erro, digite novamente: \n");
        scanf("%d", &select);
    }

    return select;
}

double soma(double n1, double n2)
{
    return n1 + n2;
}

double subtrai(double n1, double n2)
{
    return n1 - n2;
}

double multiplica(double n1, double n2)
{
    return n1 * n2;
}

double divide(double n1, double n2)
{
    return n1 / n2;
}

double desconta(double n1, double n2)
{
    n1 = n1 / 100;
    n1 = n1 * n2;

    return n2 - n1;
}

double juros(double n1, double n2)
{

    return n2 + n1;
}

// Utilização da biblioteca math, "pow" trás a potencia para meu cálculo.
double porcentagem(double n1, double n2)
{
    n1 = n1 / 100;
    n1 = n1 * n2;

    return n1;
}

double potencia(double n1, double n2)
{
    if (n2 == 1)
    {
        n1 = n1;
    }
    else if (n2 == 0)
    {
        n1 = 1;
    }
    n1 = (pow(n1, n2));

    return n1;
}
// Função da raiz quadrada, utilizando a biblioteca math
double raiz(double n1, double n2)
{
    n2 = sqrt(n1);
    return n2;
}

// Função principal

int main(void)
{

    double n1 = 0;
    double n2 = 0;
    double result = 0;
    int select, d;

    select = menu(select);

    if (select == 5 || select == 6 || select == 7)
    {
        printf("\nDigite primeiro a porcentagem, depois a variável.\n");
    }

    else if (select == 8)
    {
        printf("\nDigite primeiro a variável, depois a potência. \n");
    }

    else if (select == 9)
    {
        printf("Digite o valor: \n");
        scanf("%lf", &n1);
    }

    else
    {
        printf("\nDigite o primeiro valor: \n");
        scanf("%lf", &n1);

        printf("Digite o segundo: \n");
        scanf("%lf", &n2);
    }
    switch (select)
    {
    case 1:
        result = soma(n1, n2);
        break;

    case 2:
        result = subtrai(n1, n2);
        break;

    case 3:
        result = multiplica(n1, n2);
        break;

    case 4:
        result = divide(n1, n2);
        break;

    case 5:
        result = desconta(n1, n2);
        break;

    case 6:
        result = juros(n1, n2);
        break;

    case 7:
        result = porcentagem(n1, n2);
        break;

    case 8:
        result = potencia(n1, n2);
        break;

    case 9:
        result = raiz(n1, n2);
        break;

    default:
        printf("Inválido");
        return 0;
    }

    printf("Resultado: %.2lf\n", result);

    printf("\nDigite 1 para repetir: ");
    scanf("%d", &d);

    // Condição que permite a repetição infinita do programa
    if (d == 1)
    {
        return main();
    }

    else
    {
        return 0;
    }
}
