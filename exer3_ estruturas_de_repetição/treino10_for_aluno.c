//Faça um programa que leia dez conjuntos de dois valores, o primeiro representando o número do aluno 
//e o segundo representando sua altura em centímetros. Encontre o aluno mais alto e o mais baixo. 
//Mostre o número do aluno mais alto e o número do mais baixo, junto com suas alturas.
#include <stdio.h>
#include <stdlib.h>
int main(){
    int aluno, maior, menor;
    float altura, maior_altura, menor_altura;
    for (int i = 0; i < 3; i++){
        printf("Insira o número do aluno:\n");
        scanf("%d", &aluno);
        printf("Insira a altura do aluno:\n");
        scanf("%f", &altura);
        if (i == 0){
            maior = aluno;
            menor = aluno;
            maior_altura = altura;
            menor_altura = altura;
        }
        if (altura > maior_altura){
            maior = aluno;
            maior_altura = altura;
        }
        if (altura < menor_altura){
            menor = aluno;
            menor_altura = altura;
        }
    }
    printf("O aluno mais alto é o número %d com %.2f cm\n", maior, maior_altura);
    printf("O aluno mais baixo é o número %d com %.2f cm\n", menor, menor_altura);
    return 0;
}