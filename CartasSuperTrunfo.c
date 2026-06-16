#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades

  char state_1[3], state_2[3];
  char code_card_1[20], code_card_2[20];
  char city_1[20], city_2[20];
  unsigned long int population_1, population_2;
  float area_1, area_2;
  float pib_1, pib_2;
  int tourist_points_1, tourist_points_2;
  double population_density_1, population_density_2;
  double pib_capita_1, pib_capita_2;

  // Área para entrada de dados

  printf("Primeira Carta\n");
  printf("Informe o estado em que a cidade fica localizada\n");
  scanf("%s", state_1);

  printf("Informe o código da carta seguindo as regras, Sigla do estado mais númeração 01, 02, etc. EX: RN01\n");
  scanf("%s", code_card_1);

  printf("Informe o nome da cidade\n");
  scanf("%s", city_1);

  printf("Informe o tamanho populacional da cidade\n");
  scanf("%lu", &population_1);

  printf("Informe a tamanho da cidade em Km²\n");
  scanf("%f", &area_1);

  printf("Informe o PIB da cidade\n");
  scanf("%f", &pib_1);

  printf("Informe a quantidade de pontos túristicos\n");
  scanf("%d", &tourist_points_1);

  printf("Segunda Carta\n");
  printf("Informe o estado em que a cidade fica localizada\n");
  scanf("%s", state_2);

  printf("Informe o código da carta, seguindo as seguintes regras: UF do estado mais número 01, 02, etc: RN01\n");
  scanf("%s", code_card_2);

  printf("Informe o nome da cidade\n");
  scanf("%s", city_2);

  printf("Informe o tamanho populacional da cidade\n");
  scanf("%lu", &population_2);

  printf("Informe a tamanho da cidade em Km²\n");
  scanf("%f", &area_2);

  printf("Informe o PIB da cidade\n");
  scanf("%f", &pib_2);

  printf("Informe a quantidade de pontos túristicos\n");
  scanf("%d", &tourist_points_2);
  
  population_density_1 = (population_1 / area_1);
  pib_capita_1 = (pib_1 / population_1);

  population_density_2 = (population_2 / area_2);
  pib_capita_2 = (pib_2 / population_2);
  
  double super_power_1 = (double) (population_1 + area_1 + pib_1 + tourist_points_1 + pib_capita_1 + population_density_1);
  double super_power_2 = (double) (population_2 + area_2 + pib_2 + tourist_points_2 + pib_capita_2 + population_density_2);

  // Área para exibição dos dados da cidade

  printf("\n=============================================\n");
  printf("PRIMEIRA CARTA| \n Estado: %s \n Código da carta: %s \n Cidade: %s \n", state_1, code_card_1, city_1);
  printf(" População: %lu \n Área em Km²: %.2f \n PIB: %.2f \n Pontos túristicos %d \n", population_1, area_1, pib_1, tourist_points_1);
  printf(" Densidade Pulacional: %.2f\n PIB per Capita: %.2f\n", population_density_1, pib_capita_1);
  printf("SEGUNDA CARTA| \n Estado: %s \n Código da carta: %s \n Cidade: %s \n", state_2, code_card_2, city_2);
  printf(" População: %lu \n Área em Km²: %.2f \n PIB: %.2f \n Pontos túristicos %d", population_2, area_2, pib_2, tourist_points_2);
  printf(" Densidade Pulacional: %.2f\n PIB per Capita: %.2f\n", population_density_2, pib_capita_2);
  printf("=============================================\n");
  printf("POPULAÇÃO: Carta 1: %d VS Carta 2: %d \n", (population_1 > population_2), (population_2 > population_1));
  printf("ÁREA: Carta 1: %d VS Carta 2: %d \n", (area_1 > area_2), (area_2 > area_1));
  printf("PIB: Carta 1: %d VS Carta 2: %d \n", (pib_1 > pib_2), (pib_2 > pib_1));
  printf("PONTOS TURISTICOS: Carta 1: %d VS Carta 2: %d \n", (tourist_points_1 > tourist_points_2), (tourist_points_2 > tourist_points_1));
  printf("DENSIDADE POPULACIONAL: Carta 1: %d VS Carta 2: %d \n", (-population_density_1 < -population_density_2), (-population_density_2 < -population_density_1));
  printf("PIB PER CAPITA: Carta 1: %d VS Carta 2: %d \n", (pib_capita_1 > pib_capita_2), (pib_capita_2 > pib_capita_1));
  printf("SUPER PODER: Carta 1: %d VS Carta 2: %d \n", (super_power_1 > super_power_2), (super_power_2 > super_power_1));

return 0;
} 
