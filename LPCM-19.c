#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-19 - Ordena tres numeros em ordem crescente                * ");
printf("\n*************************************************************************** ");

float a, b, c, aux;

printf("\nDigite o primeiro numero: ");
scanf("%f", &a);
printf("Digite o segundo numero: ");
scanf("%f", &b);
printf("Digite o terceiro numero: ");
scanf("%f", &c);

if (a > b) { aux = a; a = b; b = aux; }
if (b > c) { aux = b; b = c; c = aux; }
if (a > b) { aux = a; a = b; b = aux; }

printf("\nOrdem crescente: %.2f, %.2f, %.2f\n", a, b, c);

return 0;
}
