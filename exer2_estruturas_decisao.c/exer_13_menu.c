//Faça um programa que mostre o menu de opções a seguir, 
//receba a opção do usuário e dos dados necessários para 
//executar cada operação. Suponha que o usuário não irá inserir 
//valores inválidos. Menu de opções: 1. Somar dois números 
//2. Raiz quadrada de um número 
//Digite a opção desejada
#include <stdio.h>
#include <math.h>
int main(){
    int op;
    float num1, num2, calc;

    printf("------------\nMenu de opções\n------------\n");
    printf("1. Somar dois números\n");
    printf("2. Raiz quadrada de um número\n");
    printf("--------------------\nDigite a opção desejada: ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("Insira o primeiro número: \n");
        scanf("%f", &num1);
        printf("Insira o segundo número: \n");
        scanf("%f", &num2);
        calc = num1 + num2;
        printf("------------------\n%.1f + %.1f = %.1f\n------------------", num1, num2, calc);
        break;

    case 2:
        printf("Insira o número: \n");
        scanf("%f", &num1);
        //sqrt faz o calculo de raiz quadrada
        calc = sqrt(num1);

        printf("------------------\nRaiz quadrada de %.1f: %.1f\n------------------", num1, calc);
        break;
    
    default:
        printf("Digite uma opção valida.");
        break;
    }


    

}