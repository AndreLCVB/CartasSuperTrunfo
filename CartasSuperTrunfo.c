#include <stdio.h>
#include <string.h>

// Declaração das variáveis carta 1
char codigo1[3], cidade1[50], estado1[3];
int populacao1, numeroPontosTuristicos1;
float area1, pib1;

// Declaração das variáveis carta 2
char codigo2[3], cidade2[50], estado2[3];
int populacao2, numeroPontosTuristicos2;
float area2, pib2;

int main()
{
  // Dados carta 1
  printf("carta 1\n");

  printf("Digite o nome do estado:\n");
  scanf("%s", estado1);

  printf("Digite o código da carta:\n");
  scanf("%s", codigo1);

  // Consumir o '\n' deixado pelo último scanf()
  getchar();

  printf("Digite o nome da cidade:\n");
  fgets(cidade1, sizeof(cidade1), stdin);
  cidade1[strcspn(cidade1, "\n")] = 0; // Remover o '\n' do final

  printf("Digite a população:\n");
  scanf("%d", &populacao1);

  printf("Digite a área:\n");
  scanf("%f", &area1);

  printf("Digite o PIB:\n");
  scanf("%f", &pib1);

  printf("Digite o número de pontos turísticos:\n");
  scanf("%d", &numeroPontosTuristicos1);

  // Dados carta 2

  printf("carta 2\n");

  printf("Digite o nome do estado:\n");
  scanf("%s", estado2);

  printf("Digite o código da carta:\n");
  scanf("%s", codigo2);

  // Consumir o '\n' deixado pelo último scanf()
  getchar();

  printf("Digite o nome da cidade:\n");
  fgets(cidade2, sizeof(cidade2), stdin);
  cidade1[strcspn(cidade2, "\n")] = 0; // Remover o '\n' do final

  printf("Digite a população:\n");
  scanf("%d", &populacao2);

  printf("Digite a área:\n");
  scanf("%f", &area2);

  printf("Digite o PIB:\n");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos:\n");
  scanf("%d", &numeroPontosTuristicos1);

  // Exibir os dados cadastrados
  printf("\n=== Carta 1 Cadastrada ===\n");
  printf("Estado: %s\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões\n", pib1);
  printf("Pontos turísticos: %d\n", numeroPontosTuristicos1);

  // Exibir os dados cadastrados
  printf("\n=== Carta 2 Cadastrada ===\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões\n", pib2);
  printf("Pontos turísticos: %d\n", numeroPontosTuristicos2);

  return 0;
}
