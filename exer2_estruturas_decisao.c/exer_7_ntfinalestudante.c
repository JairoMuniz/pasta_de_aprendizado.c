#include <stdio.h>
int main(){
    float nt1, nt2, nt3, peso_trabalho_lab, peso_ava_semestral, peso_exame_final, media_ponderada;

    printf("Insira sua nota no trabalho de laboratorio: \n");
    scanf("%f", &nt1);

    printf("Insira sua nota na avaliação semestral: \n");
    scanf("%f", &nt2);

    printf("Insira sua nota no exame final: \n");
    scanf("%f", &nt3);

    peso_trabalho_lab = nt1*2;
    peso_ava_semestral = nt2*3;
    peso_exame_final = nt3*4;

    media_ponderada = (peso_trabalho_lab + peso_ava_semestral + peso_exame_final)/9;
    
    printf("Sua média ponderada é: %.1f.\n", media_ponderada);

    if (media_ponderada >= 8 && media_ponderada <= 10)
    {
        printf("Conceito A\n");
    }
    if (media_ponderada >= 7 && media_ponderada < 8)
    {
        printf("Conceito B\n");
    }
    if (media_ponderada >= 6 && media_ponderada < 7)
    {
        printf("Conceito c\n");
    }
    if (media_ponderada >= 5 && media_ponderada < 6)
    {
        printf("Conceito D\n");
    }
    if (media_ponderada >= 0 && media_ponderada < 5)
    {
        printf("Conceito B\n");
    }    
    
}