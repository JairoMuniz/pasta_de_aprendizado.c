#include <stdio.h>
int main(){
    float salario, novo_sal;

    printf("Insira seu salário0: \n");
    scanf("%f", &salario);

    //ex: exercicio 7
    //salario_reajuste = salario_base + 600 - (salario_base*0.10);
    if (salario > 0)
    {
        if(salario <= 500)
        {
            novo_sal = (salario*0.05) + salario + 150;
            printf("Seu novo salário1:%.2f.\n", novo_sal);
        }
        else if (salario > 500 && salario <= 1200)
        {
            novo_sal= (salario*0.12) + salario;
            printf("Seu novo salário2:%.2f. \n", novo_sal);
        }    
        else if (salario > 500 && salario < 600)
        {
            novo_sal = (salario*0.12) + 150;
            printf("Seu novo salário3:%.2f.\n", novo_sal);
        }
        else if (salario > 1.200)
        {
            printf("Seu novo salário4:%.2f \n", salario);
        }
        
    }
     
    
}