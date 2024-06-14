//Desenvolva um algoritmo que receba um número N e calcule 
//o fatorial de N, sabendo que N! = N * (N-1) * (N-2) * ... * 3 * 2 * 1.
#include <stdio.h>
int main(){
    int i, N, fat;
    printf("Insira o valor de N:\n");
    scanf("%d", &N);
    fat = 1;
    for (int i = N; i >= 1; i--)q
    {
        fat = fat * i;
    }
    printf("o fatorial de %d é %d. \n", N, fat);
    
}