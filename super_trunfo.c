#include <stdio.h>

int main() {
    // Declaração das variáveis para a carta 1
    char estado1[3], codigo1[5], nome1[50];
    int populacao1, pontos1;
    float area1, pib1, densidade1, pib_per_capita1;

    // Declaração das variáveis para a carta 2
    char estado2[3], codigo2[5], nome2[50];
    int populacao2, pontos2;
    float area2, pib2, densidade2, pib_per_capita2;

    // Leitura dos dados da carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (sigla): ");
    scanf(" %2s", estado1);
    printf("Código da carta: ");
    scanf(" %4s", codigo1);
    getchar(); // Limpa o \n do buffer
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Leitura dos dados da carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (sigla): ");
    scanf(" %2s", estado2);
    printf("Código da carta: ");
    scanf(" %4s", codigo2);
    getchar(); // Limpa o \n do buffer
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculo da densidade populacional e PIB per capita
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0) / populacao1;

    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0) / populacao2;

    // Exibição dos dados calculados
    printf("\n--- Dados Calculados ---\n");
    printf("Carta 1 (%s - %s):\n", nome1, estado1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\nCarta 2 (%s - %s):\n", nome2, estado2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    // COMPARAÇÃO FIXA: POPULAÇÃO
    printf("\n--- Comparação de cartas (Atributo: População) ---\n");
    printf("Carta 1 - %s (%s): %d\n", nome1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", nome2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}