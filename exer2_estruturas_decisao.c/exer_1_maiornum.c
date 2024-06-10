//Faça um programa que receba dois números e mostre o maior deles. 
//Caso eles sejam iguais, deve-se mostrar a mensagem "Os números são iguais".
#include <stdio.h>
int main(){
    float nm1, nm2;
    printf("Digite o primeiro numero: \n");
    scanf("%f", &nm1);

    printf("Digite o segundo numero: \n");
    scanf("%f", &nm2);

    if (nm1 > nm2)
    {
        printf("%.2f. eh maior que %.2f.\n", nm1, nm2);
    }
    else if(nm1 < nm2)
    {
        printf("%.2f. eh menor que %.2f.\n", nm1, nm2);
    }
    else if (nm1 == nm2)
    {
        printf("%.2f. eh iguala a %.2f.\n", nm1, nm2);
    }
    
}
    