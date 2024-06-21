// Desenvolva um algoritmo que peça ao usuário que insira dois números inteiros positivos A e B,
// no qual A deve ser menor que B (supõe-se que o usuário irá respeitar esse enunciado). 
// O algoritmo deve mostrar, na tela, todos os números ímpares compreendidos entre A e B (inclusive)
#include <stdio.h>

int main(){
    int a, b;
    printf("A deve ser menor que B\n");
    printf("insira o primeiro número:\n");
    scanf("%d", &a);
    printf("insira o segundo número:\n");
    scanf("%d", &b);

    printf("São ímpares:\n");
    for (int i = a; i <= b; i++){
        if (i % 2 != 0){
            printf("-----\n%d\n", i);
        }
    }
}