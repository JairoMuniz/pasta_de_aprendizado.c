//Desenvolva um algoritmo que peça para que o usuário informe 
//a base e a altura de um retângulo, e um terceiro número inteiro "op".
//Caso o usuário escolha "op" igual a 0, calcule e mostre o perímetro
//do retângulo. Caso o usuário insira um valor 1 para "op", calcule
//e mostre a área do retângulo. Se o usuário inserir um valor diferente
//de 0 e 1 para "op", mostrar a mensagem "Opção inválida.".
#include <stdio.h>
#include <stdlib.h>
int main(){
    int op;
    float resul_peri,resul_area, b1, a1;

    printf("Insira a base: ");
    scanf("%f", &b1);

    printf("Insira a altura: ");
    scanf("%f", &a1);

    printf("Opções de processamento:\n"
           "Insira 0 para calcular o perimetro do retângulo\n"
           "Insira 1 para calcular a Área do retângulo\n");
    scanf("%d", &op);
            
            switch (op)
            {
                case 0:
                    resul_peri = 2*(b1 + a1);
                    printf("perimetro = %f\n", resul_peri);
                    printf("explicação\n");
                    printf("%f = 2x(%f + %f)\n", resul_peri, b1, a1);
                break;

                case 1:
                    resul_area = b1*a1;
                    printf("perimetro = %f\n", resul_area);
                    printf("explicação:\n");
                    printf("%f = %f x %f\n", resul_area, b1, a1);
                break;
            
            
                default:
                printf("Opção Invalida");
                break;
            }
            system("pause");

            return 0;

}