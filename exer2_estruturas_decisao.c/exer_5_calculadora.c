//Desenvolva um algoritmo que simule uma calculadora. 
//Você deve dar a opção de o usuário escolher entre: 
//1 - Somar; 2 - Subtrair; 3 - Multiplicar; 4 - Dividir.
//O usuário só conseguirá processar dois números inteiros por vez
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n1, n2, escolha, resultado_soma, resultado_sub, resultado_mult;
    float fn1, fn2, fresultado_div;
    printf("----------\n1 - Somar \n2 - Subtrair \n3 - Multiplicar \n4 - Dividir.\n----------\n");
    scanf("%d", &escolha);
        switch (escolha){
            case 1:
                printf("digite o primeiro número inteiro: \n");
                scanf("%d", &n1);

                printf("digite o segundo número inteiro: \n");
                scanf("%d", &n2);
                resultado_soma = n1 + n2;

                printf("%d + %d = %d\n", n1, n2, resultado_soma);
                    
                break;
            case 2:
                printf("digite o primeiro número inteiro: \n");
                scanf("%d", &n1);

                printf("digite o segundo número inteiro: \n");
                scanf("%d", &n2);
                resultado_sub = n1 - n2;

                printf("%d - %d = %d\n", n1, n2, resultado_sub);

                break;
                
            case 3:
                printf("digite o primeiro número inteiro: \n");
                scanf("%d", &n1);

                printf("digite o segundo número inteiro: \n");
                scanf("%d", &n2);
                resultado_mult = n1*n2;

                printf("%d x %d = %d\n", n1, n2, resultado_mult);

                break;
            
            case 4:
                printf("digite o primeiro número inteiro: \n");
                scanf("%f", &fn1);

                printf("digite o segundo número inteiro: \n");
                scanf("%f", &fn2);
                fresultado_div = fn1/fn2;

                printf("%.2f/%.2f = %.2f.\n", fn1, fn2, fresultado_div);

                break;
                        }
    system("pause");
    return 0;
}
