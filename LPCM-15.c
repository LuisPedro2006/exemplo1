#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

printf("\n*************************************************************************** ");
printf("\n* Aluno: LPCM - RA  0026307                                                * ");
printf("\n* Programa JPA-15 - Calcula quantas caixas cabem no caminhao              * ");
printf("\n*************************************************************************** ");

float comprimentoCaminhao, larguraCaminhao, alturaCaminhao;
float comprimentoCaixa, larguraCaixa, alturaCaixa;
float volumeCaminhao, volumeCaixa;
int totalCaixas;

printf("\nDigite o comprimento do caminhao (m): ");
scanf("%f", &comprimentoCaminhao);
printf("Digite a largura do caminhao (m): ");
scanf("%f", &larguraCaminhao);
printf("Digite a altura do caminhao (m): ");
scanf("%f", &alturaCaminhao);

printf("\nDigite o comprimento da caixa (m): ");
scanf("%f", &comprimentoCaixa);
printf("Digite a largura da caixa (m): ");
scanf("%f", &larguraCaixa);
printf("Digite a altura da caixa (m): ");
scanf("%f", &alturaCaixa);

volumeCaminhao = comprimentoCaminhao * larguraCaminhao * alturaCaminhao;
volumeCaixa = comprimentoCaixa * larguraCaixa * alturaCaixa;

totalCaixas = (int)(volumeCaminhao / volumeCaixa);

printf("\nCabem aproximadamente %d caixas no caminhao.\n", totalCaixas);

return 0;
}
