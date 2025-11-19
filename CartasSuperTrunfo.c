#include <stdio.h>

// Desafio Super Trunfo - Estados/Cidades
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char estado1[2],estado2[2];
  char cidade11[30],cidade21[30];
  float populacao11,populacao21;
  int pontos11,pontos21;
  float area11,area21,pib11,pib21;
  float densidade11,densidade21;
  int atributo;
  
  // Recebendo informações da carta 1

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

  printf("   \n\n\n");

  // Recebendo informações da carta 2

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


  // Área para exibição dos dados da cidade

  // printf("   \n\n\n");

  // Mostrando informações da carta 1

  // printf("################################## \n");
  // printf("### Os dados da carta A01 são: ### \n");
  // printf("################################## \n");
  // printf("Estado: %s \n", estado1);
  // printf("Cidade: %s \n", cidade11);
  // printf("Populacao: %f \n", populacao11);
  // printf("Area: %f \n", area11);
  // printf("PIB em R$: %f \n", pib11);
  // printf("Numero de Pontos Turisticos: %d \n", pontos11);

  // printf("   \n\n\n");

  // Mostrando informações da carta 2

  // printf("################################## \n");
  // printf("### Os dados da carta B02 são: ### \n");
  // printf("################################## \n");
  // printf("Estado: %s \n", estado2);
  // printf("Cidade: %s \n", cidade21);
  // printf("Populacao: %f \n", populacao21);
  // printf("Area: %f \n", area21);
  // printf("PIB em R$: %f \n", pib21);
  // printf("Numero de Pontos Turisticos: %d \n", pontos21);

  printf("   \n\n\n");

  // Selecionando atributo a ser comparado

  printf("############################################################# \n");
  printf("### Selecione o atributo a ser comparado entre as cartas: ### \n");
  printf("############################################################# \n\n");
  printf("1 - Populacao \n");
  printf("2 - Area \n");
  printf("3 - PIB \n");
  printf("4 - Numero de Pontos Turisticos \n");
  printf("5 - Densidade Populacional \n");
  printf("6 - PIB Per Capita \n");
  scanf("%d", &atributo);

  printf("   \n\n\n");

  // Verifica qual atributo foi informado para efetuar a comparacao correspondente

  if (atributo < 0 || atributo > 6)
  {
     printf("Voce infomou uma opcao de atributo invalida !!! Deve ser digitada uma opcao de 1 a 6. \n");   
  }
  else 
  {
    if (atributo == 1)
    {
        printf("Atributo selecionado: População. \n");
        printf("Carta A01 - %s",cidade11);
        printf(" / População: %f \n",populacao11);
        printf("Carta B01 - %s",cidade21);
        printf(" / População: %f \n",populacao21);
        if (populacao11 > populacao21)
        {
           printf("A carta A01 venceu !!! \n");
        }
        else (populacao11 < populacao21)
        {
           printf("A carta B01 venceu !!! \n");
        }
    }
  
  }
   

return 0;

}
