//Faça um programa que receba três números distintos e mostre-os em ordem crescente.
#include <stdio.h>
int main(){
    float n1, n2, n3;
    printf("Insira o primeiro número: ");
    scanf("%f", &n1);

    printf("Insira o segundo número: ");
    scanf("%f", &n2);

    printf("Insira o terceiro número: ");
    scanf("%f", &n3);

    if (n1 < n2 && n1 < n3)
    {
        if (n2 < n3)
        {
            printf("%.2f - %.2f - %.2f", n1, n2, n3);
        }
        else 
        { 
            printf("%.2f - %.2f - %.2f.\n", n1, n3, n2);
        }
        
    }
    if (n2 < n1 && n2 < n3)
    {
        if (n1 < n3)
        {
            printf("%.2f - %.2f - %.2f", n2, n1, n3);
        }
        else
        {
            printf("%.2f - %.2f - %.2f", n2, n3, n1);
        }
        
    }
    if (n3 < n1 && n3 < n2)
    {
        if (n1 < n2)
        {
            printf("%.2f - %.2f - %.2f.\n", n3, n1, n2); 
        } 
        else 
        { 
            printf("%.2f - %.2f - %.2f.\n", n3, n2, n1); 
        }
        }
        
    }