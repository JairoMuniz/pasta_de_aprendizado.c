#include<stdio.h>
int main(){
    float nota_aluno;
    printf("digite sua nota: ");
    scanf("%f", &nota_aluno);

    if (nota_aluno >= 7.0 && nota_aluno <= 10.0)
    {
        printf("Aprovado!\n");
    }
    

    else if (nota_aluno >= 4.0 && nota_aluno < 7.0){
        printf("Tem direito a exame!\n");
    }

    else if (nota_aluno >= 0.0 && nota_aluno < 4.0)
    {
        printf("reprovado");
    }
    else
    {
        printf("Voce digitou um numero negativo ou maior que 10; Ou escreveu uma letra, execute novamente o codigo.\n");
    }
    
return 0;
}