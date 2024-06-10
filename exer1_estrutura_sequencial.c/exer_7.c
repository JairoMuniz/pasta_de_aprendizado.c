//Faça um programa que receba o salário-base 
//de um funcionário, calcule e mostre o seu salário a receber, sabendo-se que esse 
// funcionário teve gratificação de R$ 600,00 e paga imposto de 10% sobre o salário base.
#include <stdio.h>
int main (){
    float salario_base, salario_reajuste;
    printf("digite seu salario: \n");
    scanf("%f", &salario_base);
    salario_reajuste = salario_base + 600 - (salario_base*0.10);
    printf("seu salario a receber:%2.f. \n", salario_reajuste);

    return 0;

}
