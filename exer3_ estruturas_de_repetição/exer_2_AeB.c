#include <stdio.h>
#include <stdlib.h>
int main(){
    int a, b;
    printf("Insira o número de A: ");
    scanf("%d", &a);

    printf("Insira o número de B: ");
    scanf("%d", &b);

    printf("serie númerica:\n");
    for (int i = a+1; i < b; i++)//declarar tipo de número, inteiro ou floar ou char.
    {                            //não usar ";" depois do for.
        printf("%d\n", i);
    }
    return 0;
    system ("pause");
    
}
//while(i < B){ 
    //printf("%d ", i);
    //i++; 
//}
//for (i = a+1; i < b; i++);
    //{   
        //printf("%d", i);
    //}