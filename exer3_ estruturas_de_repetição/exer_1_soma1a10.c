//Desenvolva um algoritmo que some todos os números 
//inteiros compreendidos entre 1 e 10 (inclusive).
#include <stdio.h>
#include <stdlib.h>
int main(){
    int soma, i;

    soma = 0;

    for ( i = 1; i <= 10; i++)
    {
        soma = soma + i;
    }
    printf("soma: %d.\n", soma);

    system("pause");
    return 0;
    
}