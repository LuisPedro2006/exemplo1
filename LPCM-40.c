#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-40 - Mostra a tabuada de um numero usando while            * ");
printf("\n*************************************************************************** ");

int numero, i = 1;

printf("\nDigite um numero: ");
scanf("%d", &numero);

printf("\n");
while (i <= 10) {
    printf("%d x %d = %d\n", numero, i, numero * i);
    i++;
}

return 0;
}
