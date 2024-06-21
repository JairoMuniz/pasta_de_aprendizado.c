#include <stdio.h>
#include <math.h>

int main (){

    float n1, n2, resultado;
    char op;
    
    do {
        printf("Insira o primeiro número: \n");
        scanf("%f", &n1);

        printf("Insira o segundo número: \n");
        scanf("%f", &n2);

        resultado = pow(n1, n2);

        printf("O resultado da potência é: %.2f\n", resultado);

        printf("Deseja realizar outra operação? (s/n)\n");
        scanf(" %c", &op);
    } while (op == 's' || op == 'S');

    if (op == 'n' || op == 'N'){
        printf("Programa encerrado.\n");
    }
    
    return 0;
}
