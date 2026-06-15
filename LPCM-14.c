#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-14 - Verifica o tipo de triangulo (Equilatero, Isosceles ou Escaleno)* ");
printf("\n*************************************************************************** ");

float a, b, c;

printf("\nDigite o lado A: ");
scanf("%f", &a);
printf("Digite o lado B: ");
scanf("%f", &b);
printf("Digite o lado C: ");
scanf("%f", &c);

if (a == b && b == c) {
    printf("\nTriangulo Equilatero\n");
} else if (a == b || a == c || b == c) {
    printf("\nTriangulo Isosceles\n");
} else {
    printf("\nTriangulo Escaleno\n");
}

return 0;
}
