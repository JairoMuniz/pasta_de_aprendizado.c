#include <stdio.h>
int main(){
    
    float deposito, taxa_juros, valor_rendimento, valor_pos_rendimento;
    
    printf("insira o valor do seu deposito: \n");
    scanf("%f", &deposito);

    printf("insira o valor da taxa de juros: \n");
    scanf("%f", &taxa_juros);

    valor_rendimento = deposito*taxa_juros/100;
    valor_pos_rendimento = valor_rendimento + deposito;

    printf("Seu valor de rendimento:%.2f. \n", valor_rendimento);
    printf("Seu valor pos rendimento:%.2f. \n", valor_pos_rendimento);

    return 0;
}