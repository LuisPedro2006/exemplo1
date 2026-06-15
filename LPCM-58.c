#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-58 - Calculadora de 4 operacoes usando switch case        * ");
printf("\n*************************************************************************** ");

float n1, n2, resultado;
char operacao;

printf("\nDigite o primeiro numero: ");
scanf("%f", &n1);
printf("Digite o segundo numero: ");
scanf("%f", &n2);
printf("Digite a operacao (+, -, *, /): ");
scanf(" %c", &operacao);

switch (operacao) {
    case '+':
        resultado = n1 + n2;
        printf("\nResultado: %.2f\n", resultado);
        break;
    case '-':
        resultado = n1 - n2;
        printf("\nResultado: %.2f\n", resultado);
        break;
    case '*':
        resultado = n1 * n2;
        printf("\nResultado: %.2f\n", resultado);
        break;
    case '/':
        if (n2 != 0) {
            resultado = n1 / n2;
            printf("\nResultado: %.2f\n", resultado);
        } else {
            printf("\nErro: divisao por zero!\n");
        }
        break;
    default:
        printf("\nOperacao matematica nao reconhecida\n");
}

return 0;
}
