#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-24 - Verifica se a pessoa pode votar                       * ");
printf("\n*************************************************************************** ");

int idade;

printf("\nDigite sua idade: ");
scanf("%d", &idade);

if (idade >= 16) {
    printf("\nVoce pode votar.\n");
} else {
    printf("\nVoce ainda nao pode votar.\n");
}

return 0;
}
