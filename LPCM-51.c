#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-51 - Contagem regressiva de 10 a 1 usando do...while       * ");
printf("\n*************************************************************************** ");

int i = 10;

printf("\n");
do {
    printf("%d\n", i);
    i--;
} while (i >= 1);

return 0;
}
