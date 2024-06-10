#include <stdio.h>

int main() {
  float valor_saque;  // Valor a ser sacado
  int notas_100, notas_50, notas_20, notas_10, notas_5, notas_2;  // Quantidades de cada nota

  // Obtém o valor do saque do usuário
  printf("Digite o valor que deseja sacar: ");
  scanf("%f", &valor_saque);

  // Inicializa as quantidades de notas com zero
  notas_100 = 0;
  notas_50 = 0;
  notas_20 = 0;
  notas_10 = 0;
  notas_5 = 0;
  notas_2 = 0;

  // Simula o processo de saque com o menor número de notas
  while (valor_saque > 0) {
    if (valor_saque >= 100) {
      notas_100++;
      valor_saque -= 100;
    } else if (valor_saque >= 50) {
      notas_50++;
      valor_saque -= 50;
    } else if (valor_saque >= 20) {
      notas_20++;
      valor_saque -= 20;
    } else if (valor_saque >= 10) {
      notas_10++;
      valor_saque -= 10;
    } else if (valor_saque >= 5) {
      notas_5++;
      valor_saque -= 5;
    } else {
      notas_2++;
      valor_saque -= 2;
    }
  }

  // Exibe o resultado do saque
  printf("\nNotas entregues:\n");
  if (notas_100 > 0) printf(" - %d notas de R$100,00\n", notas_100);
  if (notas_50 > 0) printf(" - %d notas de R$50,00\n", notas_50);
  if (notas_20 > 0) printf(" - %d notas de R$20,00\n", notas_20);
  if (notas_10 > 0) printf(" - %d notas de R$10,00\n", notas_10);
  if (notas_5 > 0) printf(" - %d notas de R$5,00\n", notas_5);
  if (notas_2 > 0) printf(" - %d notas de R$2,00\n", notas_2);

  return 0;
}