#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char estado1[2],estado2[2],estado3[2],estado4[2],estado5[2],estado6[2],estado7[2],estado8[2];
  char cidade11[30],cidade12[30],cidade13[30],cidade14[30];
  char cidade21[30],cidade22[30],cidade23[30],cidade24[30];
  char cidade31[30],cidade32[30],cidade33[30],cidade34[30];
  char cidade41[30],cidade42[30],cidade43[30],cidade44[30];
  char cidade51[30],cidade52[30],cidade53[30],cidade54[30];
  char cidade61[30],cidade62[30],cidade63[30],cidade64[30];
  char cidade71[30],cidade72[30],cidade73[30],cidade74[30];
  char cidade81[30],cidade82[30],cidade83[30],cidade84[30];
  float populacao11,populacao12,populacao13,populacao14;
  float populacao21,populacao22,populacao23,populacao24;
  float populacao31,populacao32,populacao33,populacao34;
  float populacao41,populacao42,populacao43,populacao44;
  float populacao51,populacao52,populacao53,populacao54;
  float populacao61,populacao62,populacao63,populacao64;
  float populacao71,populacao72,populacao73,populacao74;
  float populacao81,populacao82,populacao83,populacao84;
  int pontos11,pontos12,pontos13,pontos14;
  int pontos21,pontos22,pontos23,pontos24;
  int pontos31,pontos32,pontos33,pontos34;
  int pontos41,pontos42,pontos43,pontos44;
  int pontos51,pontos52,pontos53,pontos54;
  int pontos61,pontos62,pontos63,pontos64;
  int pontos71,pontos72,pontos73,pontos74;
  int pontos81,pontos82,pontos83,pontos84;
  float area11,area12,area13,area14;
  float area21,area22,area23,area24;
  float area31,area32,area33,area34;
  float area41,area42,area43,area44;
  float area51,area52,area53,area54;
  float area61,area62,area63,area64;
  float area71,area72,area73,area74;
  float area81,area82,area83,area84;
  float pib11,pib12,pib13,pib14;
  float pib21,pib22,pib23,pib24;
  float pib31,pib32,pib33,pib34;
  float pib41,pib42,pib43,pib44;
  float pib51,pib52,pib53,pib54;
  float pib61,pib62,pib63,pib64;
  float pib71,pib72,pib73,pib74;
  float pib81,pib82,pib83,pib84;
  float densidade11,densidade12,densidade13,densidade14;
  float densidade21,densidade22,densidade23,densidade24;
  float densidade31,densidade32,densidade33,densidade34;
  float densidade41,densidade42,densidade43,densidade44;
  float densidade51,densidade52,densidade53,densidade54;
  float densidade61,densidade62,densidade63,densidade64;
  float densidade71,densidade72,densidade73,densidade74;
  float densidade81,densidade82,densidade83,densidade84;
  float ppc11,ppc12,ppc13,ppc14;
  float ppc21,ppc22,ppc23,ppc24;
  float ppc31,ppc32,ppc33,ppc34;
  float ppc41,ppc42,ppc43,ppc44;
  float ppc51,ppc52,ppc53,ppc54;
  float ppc61,ppc62,ppc63,ppc64;
  float ppc71,ppc72,ppc73,ppc74;
  float ppc81,ppc82,ppc83,ppc84;
  


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

  // Área para exibição dos dados da cidade

  printf("################################## \n");
  printf("### Os dados da carta A01 são: ### \n");
  printf("################################## \n");
  printf("Estado: %s \n", estado1);
  printf("Cidade: %s \n", cidade11);
  printf("Populacao: %f \n", populacao11);
  printf("Area: %f \n", area11);
  printf("PIB: %f \n", pib11);
  printf("Numero de Pontos Turisticos: %d \n", pontos11);
  printf("Densidade populacional: %f \n", densidade11);
  printf("PIB per capita: %f \n", ppc11);

return 0;
} 