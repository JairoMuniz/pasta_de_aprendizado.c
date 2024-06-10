//Faça um programa que calcule e mostre a área de um 
//círculo. Sabe-se que: Área = Pi * R², aonde Pi = 3,14
#include <stdio.h>
#define p 3.14
int main(){
    float area, raio;
    printf("informe o Raio: \n");
    scanf("%f", &raio);

    area = p * (raio*raio);
    printf("Area do circulo: %.2f.\n", area);

    return 0;

}