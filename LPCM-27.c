#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-27 - Mostra a tabuada de um numero usando for              * ");
printf("\n*************************************************************************** ");

int numero, i;

printf("\nDigite um numero: ");
scanf("%d", &numero);

printf("\n");
for (i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", numero, i, numero * i);
}

return 0;
}
