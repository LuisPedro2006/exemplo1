#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-55 - Mostra o maior numero positivo ate digitar negativo  * ");
printf("\n*************************************************************************** ");

int numero, maior = 0;

do {
    printf("\nDigite um numero (negativo para parar): ");
    scanf("%d", &numero);

    if (numero > maior) {
        maior = numero;
    }
} while (numero >= 0);

printf("\nO maior numero informado foi: %d\n", maior);

return 0;
}
