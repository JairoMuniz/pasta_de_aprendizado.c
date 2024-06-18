//Faça um programa que receba o ano atual determine o salário atual desse funcionário.
#include <stdio.h>

int main() {
    float sal, sal_novo, porc;
    int i, ano_atual;

    printf("Qual é o ano atual?\n");
    scanf("%d", &ano_atual);

    sal = 1000.0;
    porc = 1.5 / 100.0;
    sal_novo = sal + sal * porc;

    for (i = 2017; i <= ano_atual; i++) {
        porc = 2 * porc;
        sal_novo = sal_novo + sal_novo * porc;
    }

    printf("O salário atual é: %.2f.\n", sal_novo);

    return 0;
}