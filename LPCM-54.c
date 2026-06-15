#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-54 - Valida nivel de dificuldade entre 1 e 5              * ");
printf("\n*************************************************************************** ");

int nivel;

do {
    printf("\nDigite o nivel de dificuldade (1 a 5): ");
    scanf("%d", &nivel);

    if (nivel < 1 || nivel > 5) {
        printf("Valor invalido! Digite entre 1 e 5.\n");
    }
} while (nivel < 1 || nivel > 5);

printf("\nNivel %d selecionado com sucesso!\n", nivel);

return 0;
}
