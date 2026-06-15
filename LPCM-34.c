#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-34 - Verifica se um numero e primo usando for              * ");
printf("\n*************************************************************************** ");

int numero, i, primo = 1;

printf("\nDigite um numero: ");
scanf("%d", &numero);

if (numero < 2) {
    primo = 0;
} else {
    for (i = 2; i < numero; i++) {
        if (numero % i == 0) {
            primo = 0;
        }
    }
}

if (primo == 1) {
    printf("\nO numero %d e PRIMO.\n", numero);
} else {
    printf("\nO numero %d NAO e primo.\n", numero);
}

return 0;
}
