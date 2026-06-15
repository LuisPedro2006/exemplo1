#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-21 - Verifica se o numero e positivo, negativo ou zero     * ");
printf("\n*************************************************************************** ");

float numero;

printf("\nDigite um numero: ");
scanf("%f", &numero);

if (numero > 0) {
    printf("\nO valor representa LUCRO (positivo).\n");
} else if (numero < 0) {
    printf("\nO valor representa PREJUIZO (negativo).\n");
} else {
    printf("\nO valor e ZERO.\n");
}

return 0;
}
