//Faça um programa que receba o salário de
//um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um
//aumento de 25%.
#include <stdio.h>
int main(){
    float sal_funcio, sal_fun_reajust;
    printf("write your salary:\n");
    scanf("%f", &sal_funcio);
    sal_fun_reajust = sal_funcio + sal_funcio*(25.0/100.0);
    printf("your salary with reajust: %.2f.\n", sal_fun_reajust);



}