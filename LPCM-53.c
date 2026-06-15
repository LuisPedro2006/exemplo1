#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-53 - Menu de cadastro com confirmacao de saida (s)        * ");
printf("\n*************************************************************************** ");

char sair;

do {
    printf("\n--- MENU CADASTRO ---\n");
    printf("Operacao realizada com sucesso!\n");
    printf("Deseja sair? (s/n): ");
    scanf(" %c", &sair);
} while (sair != 's');

printf("\nPrograma finalizado.\n");

return 0;
}
