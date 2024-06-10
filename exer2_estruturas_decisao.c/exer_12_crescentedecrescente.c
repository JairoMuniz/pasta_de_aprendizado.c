//Faça um programa que receba quatro valores, I, A, B e C.
//I é um valor inteiro e positivo e A, B e C são valores reais
//e distintos. Escreva os números A, B e C obedecendo à tabela a seguir.
//Supor que o valor digitado para I seja sempre um valor válido, ou seja, 1, 2 ou 3
#include <stdio.h>
int main(){
    float A, B, C;
    int I;
    printf("------------------------------\nInsira o primeiro número A: \n------------------------------\n");
    scanf("%f", &A);
    printf("------------------------------\nInsira o segundo número B: \n------------------------------\n");
    scanf("%f", &B);
    printf("------------------------------\nInsira o terceiro número C: \n------------------------------\n");
    scanf("%f", &C);

    printf("------------------------------\nDigite 1  para receber A, B e C em ordem crescente\n");
    printf("Digite 2 para receber A, B e C em ordem decrescente\n");
    printf("Digite 3 para Deixar o maior número no meio.\n------------------------------\n");
    scanf("%d", &I);

    switch (I)
    {
        case 1:
            if (A < B && A < C)
            {
                if (B < C)
                {
                    printf("%.2f. - %.2f. - %.2f.", A,B,C);
                }

                else
                {
                    printf("%.2f - %.2f - %.2f", A,C,B);
                }
            }
            if (B < A && B < C)
            {
                if (A < C)
                {
                    printf("%.2f. - %.2f. - %.2f.", B, A, C);
                }
                else
                {
                    printf("%.2f. - %.2f. - %.2f.", B, C, A);
                }
                
                
            }
            if (C < A && C < B)
            {
                if (A < B)
                {
                    printf("%.2f. - %.2f. - %.2f.", C, A, B);
                }
                else
                {
                    printf("%.2f. - %.2f. - %.2f.", C, B, A);
                }
            }
            
            
                break;
            
        case 2:
            if (A > B && A > C)
            {
                if (B > C)
                {
                    printf("%.2f. - %.2f. - %.2f.", A, B, C);
                }
                else
                {
                    printf("%.2f. - %.2f. - %.2f.", A, C, B );
                }
            }
            if (B > A && B > C)
            {
                if (A > C)
                {
                    printf("%.2f. - %.2f. - %.2f.", B, A, C);
                }
                else
                {
                    printf("%.2f. - %.2f. - %.2f.", B, C, A);
                }
                
                
            }
            if (C > A && C > B)
            {
                if (A > B)
                {
                    printf("%.2f. - %.2f. - %.2f.", C, A, B);
                }
                else
                {
                    printf("%.2f. - %.2f. - %.2f.", C, B, A);
                }
                
            }
            
            
                break;

        case 3:
            if (A > B && A > C)
            {
                printf("%.2f. - %.2f. - %.2f.", B, A, C);
            }
            if (B > A && B > C)
            {
                printf("%.2f. - %.2f. - %.2f.", A, B, C);
            }
            if (C > A && C > B)
            {
                printf("%.2f. - %.2f. - %.2f.", A, C, B);
            }
            
            break;

        default:
            printf("você Inseriu os números Incorretos, Execute novamente.");
                break;
    
    }
}


