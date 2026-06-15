#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-56 - Menu do totem fast-food usando switch case           * ");
printf("\n*************************************************************************** ");

int combo;

printf("\n1 - Combo Hamburguer + Batata + Refri - R$ 30,00\n");
printf("2 - Combo Pizza Brotinho + Refri - R$ 25,00\n");
printf("3 - Combo Salada + Suco Natural - R$ 22,00\n");
printf("4 - Combo Balde de Frango + Molho - R$ 35,00\n");
printf("Digite o numero do combo: ");
scanf("%d", &combo);

switch (combo) {
    case 1:
        printf("\nCombo Hamburguer + Batata + Refri - R$ 30,00\n");
        break;
    case 2:
        printf("\nCombo Pizza Brotinho + Refri - R$ 25,00\n");
        break;
    case 3:
        printf("\nCombo Salada + Suco Natural - R$ 22,00\n");
        break;
    case 4:
        printf("\nCombo Balde de Frango + Molho - R$ 35,00\n");
        break;
    default:
        printf("\nOpcao invalida! Escolha de 1 a 4.\n");
}

return 0;
}
