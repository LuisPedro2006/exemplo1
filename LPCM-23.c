#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-23 - Identifica o maior entre dois numeros                 * ");
printf("\n*************************************************************************** ");

float n1, n2;

printf("\nDigite a pontuacao do atleta 1: ");
scanf("%f", &n1);
printf("Digite a pontuacao do atleta 2: ");
scanf("%f", &n2);

if (n1 > n2) {
    printf("\nO atleta 1 obteve a maior pontuacao (%.2f).\n", n1);
} else if (n2 > n1) {
    printf("\nO atleta 2 obteve a maior pontuacao (%.2f).\n", n2);
} else {
    printf("\nAs pontuacoes sao iguais (%.2f).\n", n1);
}

return 0;
}
