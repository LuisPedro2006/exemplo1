#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-22 - Verifica se o numero e par ou impar                   * ");
printf("\n*************************************************************************** ");

int numero;

printf("\nDigite um numero: ");
scanf("%d", &numero);

if (numero % 2 == 0) {
    printf("\nO numero %d e PAR.\n", numero);
} else {
    printf("\nO numero %d e IMPAR.\n", numero);
}

return 0;
}
