#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-37 - Soma numeros digitados ate ser digitado zero          * ");
printf("\n*************************************************************************** ");

int numero, soma = 0;

printf("\nDigite numeros (digite 0 para parar):\n");
scanf("%d", &numero);

while (numero != 0) {
    soma = soma + numero;
    scanf("%d", &numero);
}

printf("\nA soma total e: %d\n", soma);

return 0;
}
