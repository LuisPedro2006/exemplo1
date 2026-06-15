#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-52 - Soma valores ate que seja digitado multiplo de 10    * ");
printf("\n*************************************************************************** ");

int numero, soma = 0;

do {
    printf("\nDigite um numero: ");
    scanf("%d", &numero);
    soma = soma + numero;
} while (numero % 10 != 0);

printf("\nA soma total e: %d\n", soma);

return 0;
}
