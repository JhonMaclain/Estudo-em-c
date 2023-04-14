/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int sex;
    float  a, pi;
    printf("Digite o seu genero 1 masculino 2 feminino: ");
    scanf("%d",&sex);
    printf("Digite o sua altura: ");
    scanf("%f",&a);
    switch(sex){
        case 1:
        pi=(72.7*a)-58;
        printf("Seu peso ideal eh %.2f.", pi);
             break;
        case 2:
        pi=(62.1*a)-44.7;
        printf("Seu peso ideal eh %.2f.", pi);
            break;
        default:
        printf("Esse codigo nao foi identificado");
    }

    return 0;
}
