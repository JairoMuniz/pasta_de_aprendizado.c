//Faça um programa que receba a hora de início de um jogo e a hora 
//final do jogo (cada hora é composta por duas variáveis inteiras: 
//hora e minuto). Calcule e mostre a duração do jogo (horas e minutos) 
//sabendo-se que o tempo máximo de duração do jogo é de 24 horas e que o 
//jogo pode iniciar em um dia e terminar no dia seguinte. Observação: 
//utilizar o formato de hora que vai das 00hr00min até as 23hr29min.
#include <stdio.h>
int main(){
    int horasinicio, minutosinicio, horasfim, minutosfim, hora, minuto;

    printf("Insira os dados de inicio\n");
    printf("Horas: \n");
    scanf("%d", &horasinicio);

    printf("minutos: \n");
    scanf("%d", &minutosinicio);

    printf("Insira os dados do fim\n");
    printf("Horas: \n");
    scanf("%d", &horasfim);
    
    printf("minutos: \n");
    scanf("%d", &minutosfim);

    if(minutosinicio > minutosfim){ 
    minutosfim = minutosfim + 60;
    horasfim = horasfim - 1; 
    } 
    
    if(horasinicio > horasfim){ 
    horasfim = horasfim + 24;
    } 

    minuto = minutosfim - minutosinicio;
    hora = horasfim - horasinicio; 
    
    printf("Duração %dhr e %dmin.\n", hora, minuto); 


}