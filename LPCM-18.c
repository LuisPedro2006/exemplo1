#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-18 - Login simples na biblioteca digital                  * ");
printf("\n*************************************************************************** ");

char usuario[50], senha[50];
char usuarioCorreto[] = "admin";
char senhaCorreta[] = "1234";

printf("\nDigite o usuario: ");
scanf("%s", usuario);
printf("Digite a senha: ");
scanf("%s", senha);

if (strcmp(usuario, usuarioCorreto) == 0 && strcmp(senha, senhaCorreta) == 0) {
    printf("\nAcesso permitido!\n");
} else {
    printf("\nAcesso negado!\n");
}

return 0;
}
