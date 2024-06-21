//Desenvolva um algoritmo que peça para o usuário inserir 
//vários números inteiros. O algoritmo deverá contabilizar 
//a quantidade de números positivos informados. Caso o usuário 
//digite 0, o algoritmo deve mostrar quantidade contabilizada e encerrar.
#include <stdio.h>
int main(){
    int i, n, qtd_positivos;
    qtd_positivos = 0;
    for (i = 0; i <= 100; i++){
        printf("Insira um número inteiro: \n");
        scanf("%d", &n);
        if (n > 0){
            qtd_positivos++;
        }
        if (n == 0){
            printf("Quantidade de números positivos: %d\n", qtd_positivos);
            break;
        }
    }
}