//Faça um programa que receba o salário de
//um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o
//novo salário.
#include <stdio.h>
int main(){
 float sal, perc, aumento, novo_sal;
 printf("Insira o salário:\n");
 scanf("%f", &sal);
 printf("Insira o percentual de aumento:\n");
 scanf("%f", &perc);
 aumento = sal * perc/100.0;
 novo_sal = sal + aumento;
 printf("Valor do aumento: %.2f.\n", aumento);
 printf("Novo salário: %.2f.\n", novo_sal);
}
