#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-43 - Soma os numeros pares entre 1 e 100 usando while      * ");
printf("\n*************************************************************************** ");

int i = 1, soma = 0;

while (i <= 100) {
    if (i % 2 == 0) {
        soma = soma + i;
    }
    i++;
}

printf("\nA soma dos numeros pares entre 1 e 100 e: %d\n", soma);

return 0;
}
