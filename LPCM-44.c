#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-44 - Conta quantos digitos um numero possui                * ");
printf("\n*************************************************************************** ");

int numero, contador = 0;

printf("\nDigite um numero positivo: ");
scanf("%d", &numero);

if (numero == 0) {
    contador = 1;
} else {
    while (numero != 0) {
        numero = numero / 10;
        contador++;
    }
}

printf("\nO numero possui %d digito(s).\n", contador);

return 0;
}
