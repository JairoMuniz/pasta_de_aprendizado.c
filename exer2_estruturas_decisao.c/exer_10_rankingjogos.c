#include <stdio.h>
 int main(){ 
    float n1, n2, n3, n4; 
    printf("Insira o primeiro número:\n"); 
    scanf("%f", &n1); 
    
    printf("Insira o segundo número:\n"); 
    scanf("%f", &n2); 
    
    printf("Insira o terceiro número:\n"); 
    scanf("%f", &n3); 
    
    printf("Insira o quarto número:\n"); 
    scanf("%f", &n4); 
    if(n4 > n3){
         printf("%f - %f - %f - %f.\n", n4, n3, n2, n1); }
    if((n4 > n2) && (n4 <= n3)){
         printf("%f - %f - %f - %f.\n", n3, n4, n2, n1); } 
    if((n4 > n1) && (n4 <= n2)){ 
        printf("%f - %f - %f - %f.\n", n3, n2, n4, n1); } 
    if((n4 <= n1)){ printf("%f - %f - %f - %f.\n", n3, n2, n1, n4); } 
}