/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int cod;
    printf("Digite um numero de 1 a 7: ");
    scanf("%d",&cod);
    switch(cod){
        case 1:
        printf("Esse numero corresponde a domingo.");
             break;
        case 2:
        printf("Esse numero corresponde a segunda-feira.");
            break;
        case 3:
        printf("Esse numero corresponde a terça-feira.");
            break;
        case 4:
        printf("Esse numero corresponde a quarta-feira.");
            break;
        case 5:
        printf("Esse numero corresponde a quinta-feira.");
            break;
        case 6:
        printf("Esse numero corresponde a sexta-feira.");
            break;
        case 7:
        printf("Esse numero corresponde a sabado.");
            break;
        default:
        printf("Esse codigo nao foi identificado");
    }

    return 0;
}
