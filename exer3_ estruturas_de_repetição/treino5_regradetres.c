//Charlinho tem 11 anos, mede 1,40 metros de altura e cresce 
//em média 2,1 centímetros ao ano. Seu irmão, Bossa, aos 14 anos, 
//tem 1,45 metros de altura e cresce em média 1,1 centímetro por ano. 
//Elabore um programa que conte quantos anos serão necessários 
//para que a altura de Charlinho ultrapasse a de Bossa.
    #include <stdio.h>

    int main() {
        float C, B;
        int anos = 0;

        for (C = 140, B = 145; C <= B; anos++) {
            C += 2.1;
            B += 1.1;
        }
        printf("\nSão necessários %d anos para que a altura de Charlinho ultrapasse a de Bossa.\n", anos);
    }