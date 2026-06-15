#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-32 - Mostra o quadrado dos numeros de 1 a 10               * ");
printf("\n*************************************************************************** ");

int i;

printf("\n");
for (i = 1; i <= 10; i++) {
    printf("O quadrado de %d e %d\n", i, i * i);
}

return 0;
}
