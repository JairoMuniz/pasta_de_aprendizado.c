#include <stdio.h>
#include <stdlib.h>
int main(){
    int v[4] = {10, 20, 30, 40};
    int i = 0;
    float m = 0;

    for(i=0; i<4; i++){
        m += v[i];
    }

    printf("A média é: %.2f\n", m/4);
    
    system("pause\n");
    return 0;
    }