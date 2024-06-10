//Desenvolva um algoritmo que peça ao usuário que informe os coeficientes a, b e c
//de uma equação de segundo grau: ax² + bx + c. Com base na Fórmula de Bhaskara, 
//calcule e mostre as raízes da respectiva equação de segundo grau.
#include <stdio.h>
int main(){
    float nA, nB, nC, Delta, resultadox1, resultadox2;
    printf("Insira o coeficiente de A: ");
    scanf("%f", &nA);

    printf("Insira o coeficiente de B: ");
    scanf("%f", &nB);

    printf("Insira o coeficiente de C: ");
    scanf("%f", &nC);

    //EX: A=7 B=4 c=3
    //Δ = b2 – 4ac
    //(-b±√(b²-4ac))/(2a)

    Delta = (nB*2) - 4*nA*nC;
    resultadox1 = (-nB + Delta/Delta)/2*nA;
    resultadox2 = (-nB - Delta/Delta)/2*nA;

    //X1 e X2 if delta > 0
    if (Delta > 0){
    printf("o resultado de x1: %.2f \n", resultadox1);
    printf("o resultado de x2: %.2f. \n", resultadox2);}

    else if (Delta == 0) {
    // Raíz real única (duplicada)
    resultadox1 = -nB / (2.0 * nA);
    printf("A raiz única (duplicada) é:\n");
    printf("x1 = x2 = %.2f\n", resultadox1);
  } else {
    // Raízes complexas
    printf("Não há raízes reais para essa equação.\n");
  }
}