//Faça um programa que receba três notas,
//calcule e mostre a média aritmética entre elas
#include <stdio.h>
int main(){
    float nota1, nota2, nota3, media;
    printf("Digite suas 3 notas a seguir em sequencia:\n");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);
    media = (nota1 + nota2 + nota3)/3;
    printf("a media das suas 3 nota é: %f.\n", media);


}