#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  char Estado;
  int Código[2];
  char Nome[50];
  int População, pontos;
  float àrea, PIB;

  printf("Digite a letra do estado:\n");
  scanf("%s", &Estado);

  printf("Digite o código da carta:\n");
  scanf("%d", &Código);

  printf("Digite o nome da cidade:\n");
  scanf("%s", &Nome);

  printf("Digite o número de habitantes:\n");
  scanf("%d", &População);

  printf("Digite a àrea em km2:\n");
  scanf("%f", &àrea);

  printf("Digite o produto interno bruto(pib) da cidade:\n");
  scanf("%f", &PIB);

  printf("Digite a quantidade de pontos turísticos na cidade\n");
  scanf("%d", &pontos);


return 0;
} 
