//Desenvolva um algoritmo que receba um número 
//N e imprima a tabuada de N, na tela.
#include <stdio.h>
int main(){
    int i, n, seg_numero, resultado;
    printf("Insira o número que você quer saber a tabuada: \n");
    scanf("%d", &n);

    seg_numero = 1;

    for (i = seg_numero; i <= 10; i++){
        resultado = n * i;

        printf("A tabuada de %d x %d: %d\n", n, i, resultado);
    }

}