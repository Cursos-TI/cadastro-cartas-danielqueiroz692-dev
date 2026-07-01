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
  unsigned choice;

  // Área para entrada de dados

  printf("Primeira Carta\n");
  printf("Informe o estado em que a cidade fica localizada, escreva a sigla correspondente ao estado. ex: RN, RS, AM, etc\n");
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
  
  // Área para exibição dos dados da cidade
  printf("Escolha qual dos atributos você deseja fazer a comparação\n"
        "1: População\n"
        "2: Área\n"
        "3: PIB\n"
        "4: Quantidade de pontos turisticos\n"
        "5: Densidade populacional\n"
        "6: PIB per Capita\n");
  scanf("%u", &choice); 
  unsigned result = 0;

  switch (choice) {
  case 1:
    if (population_1 > population_2) {
      result = 1;
    } else if (population_1 < population_2) {
      result = 2;
    } else {
      result = 0;
    }
    break;
  case 2:
    if (area_1 > area_2) {
      result = 1;
    } else if (area_1 < area_2) {
      result = 2;
    } else {
      result = 0;
    }
    break;
  case 3:
    if (pib_1 > pib_2) {
      result = 1;
    } else if (pib_1 < pib_2) {
      result = 2;
    } else {
      result = 0;
    }
    break;
  case 4:
    if (tourist_points_1 > tourist_points_2) {
      result = 1;
    } else if (tourist_points_1 < tourist_points_2) {
      result = 2;
    } else {
      result = 0;
    }
    break;
  case 5:
    if (population_density_1 > population_density_2) {
      result = 2;
    } else if (population_density_1 < population_density_2) {
      result = 1;
    } else {
      result = 0;
    }
    break;
  case 6:
    if (pib_capita_1 > pib_capita_2) {
      result = 1;
    } else if (pib_capita_1 < pib_capita_2) {
      result = 2;
    } else {
      result = 0;
    }
    break;
  default:
    printf("ERROR! valor inválido");
    return 1;
  }

if (result == 1) {
  printf("### Carta 1 ganhou ### \n Cidade 1: %s \n Cidade 2: %s\n", city_1, city_2);
} else if (result == 2) {
  printf("### Carta 2 ganhou ### \n Cidade 1: %s \n Cidade 2: %s\n", city_1, city_2);
} else {
  printf("Empate !! \n Cidade 1: %s \n Cidade 2: %s\n", city_1, city_2);
}
printf("Atributo comparado: ");

if (choice == 1) {
    printf("População\n Valores dos Atributos:\n Cidade 1: %lu\n Cidade 2: %lu\n", population_1, population_2);
} else if (choice == 2) {
    printf("Área\n Valores dos Atributos:\n Cidade 1: %.2f\n Cidade 2: %.2f\n", area_1, area_2);
} else if (choice == 3) {
    printf("PIB\n Valores dos Atributos:\n Cidade 1: %.2f\n Cidade 2: %.2f\n", pib_1, pib_2);
} else if (choice == 4) {
    printf("Quantidade de pontos turisticos\n Valores dos Atributos:\n Cidade 1: %d\n Cidade 2: %d\n", tourist_points_1, tourist_points_2);
} else if (choice == 5) {
    printf("Densidade populacional\n Valores dos Atributos:\n Cidade 1: %.2f\n Cidade 2: %.2f\n", population_density_1, population_density_2);
} else if (choice == 6) {
    printf("PIB per capita\n Valores dos Atributos:\n Cidade 1: %.2f\n Cidade 2: %.2f\n", pib_capita_1, pib_capita_2);
}

return 0;
}