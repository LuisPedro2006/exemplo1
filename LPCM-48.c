#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-48 - Menu com opcao de sair usando do...while             * ");
printf("\n*************************************************************************** ");

int opcao;

do {
    printf("\n1 - Mensagem\n");
    printf("2 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("\nVoce escolheu a mensagem!\n");
    }
} while (opcao != 2);

printf("\nPrograma finalizado.\n");

return 0;
}
