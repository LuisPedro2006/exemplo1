#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-45 - Menu de opcoes do caixa eletronico ate sair          * ");
printf("\n*************************************************************************** ");

int opcao = -1;

while (opcao != 3) {
    printf("\n--- MENU ---\n");
    printf("1 - Saldo\n");
    printf("2 - Saque\n");
    printf("3 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("\nSeu saldo e R$ 1000,00\n");
    } else if (opcao == 2) {
        printf("\nSaque realizado com sucesso!\n");
    } else if (opcao == 3) {
        printf("\nSaindo do sistema...\n");
    } else {
        printf("\nOpcao invalida!\n");
    }
}

return 0;
}
