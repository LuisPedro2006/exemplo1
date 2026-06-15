#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-50 - Pede um numero positivo obrigatorio usando do...while * ");
printf("\n*************************************************************************** ");

float numero;

do {
    printf("\nDigite um valor positivo para deposito: ");
    scanf("%f", &numero);

    if (numero <= 0) {
        printf("Valor invalido! Tente novamente.\n");
    }
} while (numero <= 0);

printf("\nDeposito de R$ %.2f aceito.\n", numero);

return 0;
}
