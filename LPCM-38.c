#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-38 - Solicita a senha ate digitar a correta               * ");
printf("\n*************************************************************************** ");

int senha;
int senhaCorreta = 1234;

printf("\nDigite a senha: ");
scanf("%d", &senha);

while (senha != senhaCorreta) {
    printf("Senha incorreta! Tente novamente: ");
    scanf("%d", &senha);
}

printf("\nAcesso liberado!\n");

return 0;
}
