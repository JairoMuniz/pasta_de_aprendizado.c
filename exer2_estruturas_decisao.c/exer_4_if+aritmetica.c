//Desenvolva um algoritmo que receba dois números, calcule
//e mostre a multiplicação entre eles, se ambos forem 
//iguais. Caso o primeiro seja maior que o segundo, 
//mostre a subtração do primeiro pelo segundo. Caso 
//contrário, mostre a soma entre os dois
#include <stdio.h>
int main(){
    float n1, n2, resultado, resultado_sub, resultado_soma;
    printf("Isnira o primeiro número: \n");
    scanf("%f", &n1);

    printf("Isnira o segundo número: \n");
    scanf("%f", &n2);

    resultado = n1 * n2;
    resultado_sub = n1 - n2;
    resultado_soma = n1 + n2;

    if (n1 == n2)
    {
        printf("A multipiplicação de %.2f. com %.2f resulta: %.2f. \n", n1, n2, resultado);
    }
    else if (n1 > n2){
        
        printf("A subtração de %.2f. com %.2f resulta: %.2f. \n", n1, n2, resultado_sub);

    }
    else if(n1 < n2){
        printf("A soma de %.2f. com %.2f. resulta: %.2f \n", n1, n2, resultado_soma);
    }
    
}