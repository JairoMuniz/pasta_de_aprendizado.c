//Faça um programa que receba três notas e
//seus respectivos pesos, calcule e mostre a média ponderada dessas notas.
#include <stdio.h>
int main (){
    float nt1, nt2, nt3, peso1, peso2, peso3, media_ponderada;

    printf("Insira sua primeira nota: ");
    scanf("%f", &nt1);
    printf("Insira seu primeiro peso: ");
    scanf("%f", &peso1);
    printf("Insira sua segunda nota: ");
    scanf("%f", &nt2);
    printf("Insira seu segundo peso: ");
    scanf("%f", &peso2);
    printf("Insira sua terceira nota: ");
    scanf("%f", &nt3);
    printf("Insira seu terceiro peso: ");
    scanf("%f", &peso3);

    media_ponderada = (nt1*peso1 + nt2*peso1 + nt3*peso3)/(peso1+peso2+peso3);
    printf("your average is:%f", media_ponderada);





}