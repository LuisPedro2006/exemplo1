#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-49 - Pede a senha repetidamente ate acertar (1111)        * ");
printf("\n*************************************************************************** ");

int senha;

do {
    printf("\nDigite a senha de acesso ao laboratorio: ");
    scanf("%d", &senha);

    if (senha != 1111) {
        printf("Senha incorreta!\n");
    }
} while (senha != 1111);

printf("\nAcesso liberado!\n");

return 0;
}
