#include <stdio.h>
int main(int argc, char *argv[]) {

    float n1, n2, n3, n4, soma;

    printf("Informe o primeiro número:\n"); scanf("%d", &n1);
    printf("Informe o segundo numero: \n");
    scanf("%d", &n2); printf("Informe o terceiro numero: \n");
    scanf("%d", &n3);
    printf("Informe o quarto numero: \n");
    scanf("%d", &n4);
    soma = n1 + n2+n3+ n4;
    printf("Resultado da soma: %d.\n", soma);
    system("pause");
    return 0;
    
    }