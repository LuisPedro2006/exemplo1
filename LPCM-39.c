#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-39 - Pede numeros ate que seja digitado um positivo        * ");
printf("\n*************************************************************************** ");

float numero;

printf("\nDigite um numero: ");
scanf("%f", &numero);

while (numero <= 0) {
    printf("Numero invalido! Digite um numero positivo: ");
    scanf("%f", &numero);
}

printf("\nNumero positivo aceito: %.2f\n", numero);

return 0;
}
