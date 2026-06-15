#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-41 - Verifica se um numero e primo usando while            * ");
printf("\n*************************************************************************** ");

int numero, divisores = 0, i = 1;

printf("\nDigite um numero: ");
scanf("%d", &numero);

while (i <= numero) {
    if (numero % i == 0) {
        divisores++;
    }
    i++;
}

if (divisores == 2) {
    printf("\nO numero %d e PRIMO.\n", numero);
} else {
    printf("\nO numero %d NAO e primo.\n", numero);
}

return 0;
}
