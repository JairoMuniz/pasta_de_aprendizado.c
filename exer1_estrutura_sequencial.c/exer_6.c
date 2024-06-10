//faça um programa que receba o salário-base 
//de um funcionário, calcule e mostre o salário a receber, sabendo-se que esse funcionário 
//tem gratificação de 5% sobre o salário-base e paga imposto de 7% sobre o salário-base.
#include <stdio.h>
int main (){
    float salario_base, salario_reajuste;
    printf("digite seu salario: \n");
    scanf("%f", &salario_base);
    salario_reajuste = salario_base + salario_base*0.05 - salario_base*0.07;
    printf("seu salario liquido e:%2.f. \n", salario_reajuste);



}