/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//a = altura e pi = pso ideal
#include <stdio.h>

int main()
{
    int sex;
    float  salario, taxaP;
    printf("Digite o seu genero 1 masculino 2 feminino: ");
    scanf("%d",&sex);
    printf("Digite  o valor do seu salario: ");
    scanf("%f",&salario);
    switch(sex){
        case 1:
        taxaP= salario*0.12;
        printf("Imposto a ser pago eh %.2f.", taxaP);
             break;
        case 2:
        taxaP=salario*0.08;
        printf("Imposto a ser pago eh %.2f.", taxaP);
            break;
        default:
        printf("Valor nao cadastrado para sexo.");
    }

    return 0;
}
