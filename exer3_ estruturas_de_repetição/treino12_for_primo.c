#include <stdio.h>

int main() {
    int n, i, primo = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    // Verifica se o número é divisível por algum número além de 1 e ele mesmo
    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            primo = 0;
            break;
        }
    }

    if (primo)
        printf("%d é um número primo.\n", n);
    else
        printf("%d não é um número primo.\n", n);

    return 0;
}