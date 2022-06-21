#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    char resposta;
    printf("Que turno você estuda? \n Responder V para vespertino,\n Responder M para matutino,\n Responder N para noturno.\n");
    scanf("%c",&resposta);
    if(resposta=='V' || resposta=='v'){
        printf("Boa tarde");
    }
    if(resposta=='N' || resposta=='n'){
        printf("Boa noite");
    }
    if(resposta=='M' || resposta=='m'){
        printf("Bom dia");
    }
    if(resposta!='V'&&resposta!='N'&&resposta!='M'&&resposta!='v'&&resposta!='n'&&resposta!='M'){
        printf("Valor inválido");
        }





    return 0;
}
