#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-25 - Verifica situacao do aluno pela media final           * ");
printf("\n*************************************************************************** ");

float media;

printf("\nDigite a media final do aluno: ");
scanf("%f", &media);

if (media >= 7) {
    printf("\nAluno APROVADO.\n");
} else if (media >= 5) {
    printf("\nAluno em RECUPERACAO.\n");
} else {
    printf("\nAluno REPROVADO.\n");
}

return 0;
}
