#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-33 - Lista os multiplos de 3 entre 1 e 30                  * ");
printf("\n*************************************************************************** ");

int i;

printf("\n");
for (i = 1; i <= 30; i++) {
    if (i % 3 == 0) {
        printf("%d ", i);
    }
}
printf("\n");

return 0;
}
