#include <stdio.h>

int main() {
    int termo1 = 0, termo2 = 1, proximoTermo, i;

    printf("Os oito primeiros termos da sequência de Fibonacci são:\n");

    for (i = 1; i <= 8; ++i) {
        printf("%d, ", termo1);
        proximoTermo = termo1 + termo2;
        termo1 = termo2;
        termo2 = proximoTermo;
    }

    return 0;
}