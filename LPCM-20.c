#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-20 - Verifica se o ano e bissexto                          * ");
printf("\n*************************************************************************** ");

int ano;

printf("\nDigite o ano: ");
scanf("%d", &ano);

if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
    printf("\nO ano %d e bissexto.\n", ano);
} else {
    printf("\nO ano %d nao e bissexto.\n", ano);
}

return 0;
}
