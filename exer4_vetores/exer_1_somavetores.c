#include <stdio.h>
int main(){

    int v[4];

    float m = 0;
    v[0] = 1;
    v[1] = 2;
    v[2] = 3;
    v[3] = 4;

    m = (v[0]+v[1]+v[2]+v[3]+v[4])/4;

    printf("a média é %.2f: ", m );

}
