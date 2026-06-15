#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-42 - Conta quantos numeros impares foram digitados        * ");
printf("\n*************************************************************************** ");

int numero, contador = 0, i = 1, impares = 0;

printf("\n");
while (i <= 10) {
    printf("Digite o numero %d: ", i);
    scanf("%d", &numero);

    if (numero % 2 != 0) {
        impares++;
    }
    i++;
}

printf("\nQuantidade de numeros impares digitados: %d\n", impares);

return 0;
}
