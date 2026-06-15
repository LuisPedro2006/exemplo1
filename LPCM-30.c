#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-30 - Calcula o fatorial de um numero usando for            * ");
printf("\n*************************************************************************** ");

int numero, i;
long long fatorial = 1;

printf("\nDigite um numero: ");
scanf("%d", &numero);

for (i = 1; i <= numero; i++) {
    fatorial = fatorial * i;
}

printf("\nO fatorial de %d e %lld\n", numero, fatorial);

return 0;
}
