//Faça um programa que calcule e mostre a área de 
//um triângulo. Sabe-se que: Área = (base * altura)/2.

#include <stdio.h>
int main(){
    float area, base, altura;
    printf("informe a base: \n");
    scanf("%f", &base);

    printf("informe a altura: \n");
    scanf("%f", &altura);

    area = (base*altura)/2;

    printf("Area do triangulo:%2.f.", area);

    return 0;
}