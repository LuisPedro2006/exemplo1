#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-17 - Sensor de altura da montanha-russa                    * ");
printf("\n*************************************************************************** ");

float altura;

printf("\nDigite a altura medida (cm): ");
scanf("%f", &altura);

if (altura >= 140) {
    printf("\nLuz VERDE - Liberado para entrar no brinquedo!\n");
} else {
    printf("\nLuz VERMELHA - Barrado, altura insuficiente!\n");
}

return 0;
}
