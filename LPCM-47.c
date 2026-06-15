#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-47 - Mostra a tabuada de um numero usando do...while       * ");
printf("\n*************************************************************************** ");

int numero, i = 1;

printf("\nDigite um numero: ");
scanf("%d", &numero);

printf("\n");
do {
    printf("%d x %d = %d\n", numero, i, numero * i);
    i++;
} while (i <= 10);

return 0;
}
