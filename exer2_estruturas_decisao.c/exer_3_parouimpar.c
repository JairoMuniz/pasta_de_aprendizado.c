//Faça um programa que receba um número inteiro e verifique se esse número é par ou ímpar.
#include <stdio.h>
int main(){
    int n1, r;
    printf("Insira o primeiro numero:\n");
    scanf("%d", &n1);
    r = n1 % 2; //r = n1 % 2;: A variável r recebe o resto da divisão de n1 por 2.
//O operador % em C calcula o resto da divisão entre dois operandos. No caso de n1 % 2,
// o resto será 0 se n1 for par e 1 se for ímpar.
    if (r == 0)
    {
        printf("par");
    }
    else if (r != 0)
    {
        printf("impar");
    }
 
}