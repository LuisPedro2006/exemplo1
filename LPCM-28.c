#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-28 - Soma dos numeros de 1 a 100 usando for                * ");
printf("\n*************************************************************************** ");

int i, soma = 0;

for (i = 1; i <= 100; i++) {
    soma = soma + i;
}

printf("\nA soma dos numeros de 1 a 100 e: %d\n", soma);

return 0;
}
