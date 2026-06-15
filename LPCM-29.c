#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-29 - Mostra os numeros pares entre 0 e 50                  * ");
printf("\n*************************************************************************** ");

int i;

printf("\n");
for (i = 0; i <= 50; i++) {
    if (i % 2 == 0) {
        printf("%d ", i);
    }
}
printf("\n");

return 0;
}
