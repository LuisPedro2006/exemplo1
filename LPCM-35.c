#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-35 - Mostra os n primeiros termos da sequencia Fibonacci  * ");
printf("\n*************************************************************************** ");

int n, i, t1 = 0, t2 = 1, proximo;

printf("\nDigite a quantidade de termos: ");
scanf("%d", &n);

printf("\n");
for (i = 1; i <= n; i++) {
    printf("%d ", t1);
    proximo = t1 + t2;
    t1 = t2;
    t2 = proximo;
}
printf("\n");

return 0;
}
