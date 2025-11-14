#include <stdio.h>

// Desafio Super Trunfo - Estados/Cidades
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char estado1[2],estado2[2];
  char cidade11[30],cidade21[30],tecla;
  float populacao11,populacao21;
  int pontos11,pontos21,segue;
  float area11,area21,pib11,pib21,densidade11,densidade21,ppc11,ppc21;

  
  // Área para entrada de dados

  printf("Informe a unidade da federacao A: \n");
  scanf("%s", &estado1);
  printf("Informe a cidade da carta 1 / estado A: \n");
  scanf("%s", &cidade11);
  printf("Informe a populacao da carta 1 / estado A: \n");
  scanf("%f", &populacao11);
  printf("Informe a area, em Km2, da carta 1 / estado A: \n");
  scanf("%f", &area11);
  printf("Informe o pib, em R$, da carta 1 / estado A: \n");
  scanf("%f", &pib11);
  printf("Informe a quantidade de pontos turísticos da carta 1 / estado A: \n");
  scanf("%d", &pontos11);
  densidade11 = populacao11/area11;
  ppc11 = pib11/populacao11;

  printf("   \n\n\n");

  printf("Informe a unidade da federacao B: \n");
  scanf("%s", &estado2);
  printf("Informe a cidade da carta 2 / estado B: \n");
  scanf("%s", &cidade21);
  printf("Informe a populacao da carta 2 / estado B: \n");
  scanf("%f", &populacao21);
  printf("Informe a area, em Km2, da carta 2 / estado B: \n");
  scanf("%f", &area21);
  printf("Informe o pib, em R$, da carta 2 / estado B: \n");
  scanf("%f", &pib21);
  printf("Informe a quantidade de pontos turísticos da carta 2 / estado B: \n");
  scanf("%d", &pontos21);
  densidade21 = populacao21/area21;
  ppc21 = pib21/populacao21;


  // Área para exibição dos dados da cidade

  printf("   \n\n\n");

  printf("################################## \n");
  printf("### Os dados da carta A01 são: ### \n");
  printf("################################## \n");
  printf("Estado: %s \n", estado1);
  printf("Cidade: %s \n", cidade11);
  printf("Populacao: %f \n", populacao11);
  printf("Area: %f \n", area11);
  printf("PIB em R$: %f \n", pib11);
  printf("Numero de Pontos Turisticos: %d \n", pontos11);
  printf("Densidade populacional: %f \n", densidade11);
  printf("PIB per capita em R$: %f \n\n\n", ppc11);

  printf("   \n\n\n");

  printf("################################## \n");
  printf("### Os dados da carta B02 são: ### \n");
  printf("################################## \n");
  printf("Estado: %s \n", estado2);
  printf("Cidade: %s \n", cidade21);
  printf("Populacao: %f \n", populacao21);
  printf("Area: %f \n", area21);
  printf("PIB em R$: %f \n", pib21);
  printf("Numero de Pontos Turisticos: %d \n", pontos21);
  printf("Densidade populacional: %f \n", densidade21);
  printf("PIB per capita em R$: %f \n\n\n", ppc21);

return 0;
} 