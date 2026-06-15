#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-57 - Fala do urso de pelucia conforme a cor (switch case) * ");
printf("\n*************************************************************************** ");

char cor[20];

printf("\nDigite a cor que acendeu (Verde, Amarelo, Vermelho): ");
scanf("%s", cor);

if (strcmp(cor, "Verde") == 0) {
    printf("\nO urso diz: Vamos brincar la fora!\n");
} else if (strcmp(cor, "Amarelo") == 0) {
    printf("\nO urso diz: Estou ficando com soninho...\n");
} else if (strcmp(cor, "Vermelho") == 0) {
    printf("\nO urso diz: Estou com fome, hora do lanche!\n");
} else {
    printf("\nCor desconhecida\n");
}

return 0;
}
