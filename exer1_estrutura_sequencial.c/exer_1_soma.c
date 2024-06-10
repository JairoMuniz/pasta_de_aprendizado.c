//Faça um programa que receba quatro
//números inteiros, calcule e mostre a soma desses números.
#include <stdio.h>
int main() {
    int nmr1, nmr2, nmr3, nmr4, soma;
    printf("informe 4 numeros inteiros em sequencia:\n");
    scanf("%d", &nmr1);
    scanf("%d", &nmr2);
    scanf("%d", &nmr3);
    scanf("%d", &nmr4);
    soma = nmr1 + nmr2 + nmr3 + nmr4;
    printf("Resultado da soma: %d.\n", soma);

}