#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-16 - Verifica se o pedido e multiplo de 3 e/ou 5           * ");
printf("\n*************************************************************************** ");

int pedido;

printf("\nDigite o numero do pedido: ");
scanf("%d", &pedido);

if (pedido % 3 == 0 && pedido % 5 == 0) {
    printf("\nParabens! Voce ganhou um refrigerante e uma sobremesa!\n");
} else if (pedido % 3 == 0) {
    printf("\nParabens! Voce ganhou um refrigerante!\n");
} else if (pedido % 5 == 0) {
    printf("\nParabens! Voce ganhou uma sobremesa!\n");
} else {
    printf("\nNao foi premiado nesta promocao.\n");
}

return 0;
}
