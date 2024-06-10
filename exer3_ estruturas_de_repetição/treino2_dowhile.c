#include <stdio.h>
int main(){
    int i;


    do //do é executado ao menos 1 vez
    {
        printf("Escreva um número maior que 0: ");
        scanf("%d", &i);
    } while (i < 0); //ocorre verificação da variavel
    
}