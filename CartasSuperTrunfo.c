#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  //CARTA 01
  char estado1;
  char codigo1[3];
  char cidade1[20];
  int população1;
  double area1;
  double PIB1;
  int turisticos1;

  //CARTA 02
  char estado2;
  char codigo2[3];
  char cidade2[20];
  int população2;
  double area2;
  double PIB2;
  int turisticos2;
  
  // Área para entrada de dados
  //CARTA 01
  printf("Dados CARTA 01:\n");

  printf("Digite o Estado: ");
  scanf("%c", &estado1);

  printf("Digite o código: ");
  scanf("%s", codigo1);

  printf("Digite a Cidade: ");
  scanf("%s", cidade1);

  printf("Digite a população: ");
  scanf("%d", &população1);

  printf("DIgite a área: ");
  scanf("%lf", &area1);

  printf("Digite o PIB: ");
  scanf("%lf", &PIB1);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &turisticos1);


  //CARTA 02
  printf("Dados CARTA 02:\n");
  printf("Digite o Estado: ");
  scanf("%c(*)[1]", &estado2);

  printf("Digite o código: ");
  scanf("%s", codigo2);

  printf("Digite a Cidade: ");
  scanf("%s", cidade2);

  printf("Digite a população: ");
  scanf("%d", &população2);

  printf("Digite a área: ");
  scanf("%lf", &area2);

  printf("Digite o PIB: ");
  scanf("%lf", &PIB2);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &turisticos2);


  

  // Área para exibição dos dados da cidade
  //CARTA 01
  printf("Carta 01\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", população1);
  printf("Área: %.2f Km2\n", area1);
  printf("PIB: R$ %.2f\n", PIB1);
  printf("Número de pontos turísticos: %d\n", turisticos1);
  printf("\n");

  //CARTA 02
  printf("Carta 02:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", população2);
  printf("Área: %.2f Km2\n", area2);
  printf("PIB: R$ %.2f\n", PIB2);
  printf("Número de pontos turísticos: %d\n", turisticos2);

return 0;
} 

