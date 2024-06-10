//Faça um programa que receba três notas de um aluno, 
//calcule e mostre a média aritmética e a mensagem que 
//segue a tabela abaixo. Para alunos de exame, calcule e mostre
//a nota que deverá ser tirada no exame para aprovação, 
//considerando que a média no exame é 6,0.
#include <stdio.h>
int main(){
    float n1, n2, n3, media, exam;
    printf("Insira  sua primeira nota: \n");
    printf("Insira  sua segunda nota: \n");
    printf("Insira  sua terceira nota: \n");
    media = (n1 + n2 + n3)/3;

    if (media >= 7 && media <= 10)
    {
        printf("Aprovado.");
    }
    if (media >= 3 && media < 7 )
    {
        printf("Exame.");
        exam = 12 - med; 
        printf("É preciso tirar %.1f no exame.\n", exam);
    }
    if (media >= 0 && media < 3)
    {
        printf("Reprovado.")
    }
    
    
    
}