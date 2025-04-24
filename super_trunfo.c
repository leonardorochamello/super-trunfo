#include <stdio.h>
#include <string.h>

int main() {
    // Dados fixos para as duas cartas
    char pais1[50] = "Brasil";
    int populacao1 = 213000000;
    float area1 = 8515767.0;
    float pib1 = 2400000000000.0;
    int pontos1 = 50;
    float densidade1 = populacao1 / area1;

    char pais2[50] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780000.0;
    float pib2 = 550000000000.0;
    int pontos2 = 30;
    float densidade2 = populacao2 / area2;

    int atributo1, atributo2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;

    // Menu para o primeiro atributo
    printf("===== SUPER TRUNFO - COMPARAÇÃO DUPLA =====\n");
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &atributo1);

    // Menu dinâmico para o segundo atributo
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != atributo1) {
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Demográfica\n"); break;
            }
        }
    }
    printf("Opção: ");
    scanf("%d", &atributo2);

    // Verificação de entrada
    if (atributo1 < 1 || atributo1 > 5 || atributo2 < 1 || atributo2 > 5 || atributo1 == atributo2) {
        printf("Erro: Opções inválidas ou repetidas.\n");
        return 1;
    }

    // Função para buscar valor do atributo escolhido
    for (int i = 1; i <= 2; i++) {
        int atr = (i == 1) ? atributo1 : atributo2;
        float *val_carta1 = (i == 1) ? &valor1_carta1 : &valor2_carta1;
        float *val_carta2 = (i == 1) ? &valor1_carta2 : &valor2_carta2;

        switch (atr) {
            case 1: *val_carta1 = populacao1; *val_carta2 = populacao2; break;
            case 2: *val_carta1 = area1; *val_carta2 = area2; break;
            case 3: *val_carta1 = pib1; *val_carta2 = pib2; break;
            case 4: *val_carta1 = pontos1; *val_carta2 = pontos2; break;
            case 5: *val_carta1 = densidade1; *val_carta2 = densidade2; break;
        }
    }

    // Soma dos valores
    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;

    // Exibição dos resultados
    printf("\nComparação entre %s e %s:\n", pais1, pais2);
    printf("Atributo 1 (%d): %s = %.2f | %s = %.2f\n", atributo1, pais1, valor1_carta1, pais2, valor1_carta2);
    printf("Atributo 2 (%d): %s = %.2f | %s = %.2f\n", atributo2, pais1, valor2_carta1, pais2, valor2_carta2);
    printf("Soma dos atributos: %s = %.2f | %s = %.2f\n", pais1, soma1, pais2, soma2);

    // Determinação do vencedor
    const char* vencedor = (soma1 > soma2) ? pais1 : (soma2 > soma1) ? pais2 : "Empate!";
    printf("Resultado final: %s\n", vencedor);

    return 0;
}