#include <stdio.h>
#include <string.h>

int main() {
    // Dados da Carta 1
    char pais1[50] = "Brasil";
    int populacao1 = 213000000;
    float area1 = 8515767.0;
    float pib1 = 2400000000000.0;
    int pontos1 = 50;
    float densidade1 = populacao1 / area1;

    // Dados da Carta 2
    char pais2[50] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780000.0;
    float pib2 = 550000000000.0;
    int pontos2 = 30;
    float densidade2 = populacao2 / area2;

    int opcao;

    do {
        printf("\n===== MENU SUPER TRUNFO =====\n");
        printf("1 - Comparar População\n");
        printf("2 - Comparar Área\n");
        printf("3 - Comparar PIB\n");
        printf("4 - Comparar Pontos Turísticos\n");
        printf("5 - Comparar Densidade Demográfica\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        printf("\nComparando %s e %s:\n", pais1, pais2);

        switch (opcao) {
            case 1:
                printf("População:\n");
                printf("%s: %d habitantes\n", pais1, populacao1);
                printf("%s: %d habitantes\n", pais2, populacao2);
                if (populacao1 > populacao2)
                    printf("Resultado: %s venceu!\n", pais1);
                else if (populacao2 > populacao1)
                    printf("Resultado: %s venceu!\n", pais2);
                else
                    printf("Resultado: Empate!\n");
                break;

            case 2:
                printf("Área:\n");
                printf("%s: %.2f km²\n", pais1, area1);
                printf("%s: %.2f km²\n", pais2, area2);
                if (area1 > area2)
                    printf("Resultado: %s venceu!\n", pais1);
                else if (area2 > area1)
                    printf("Resultado: %s venceu!\n", pais2);
                else
                    printf("Resultado: Empate!\n");
                break;

            case 3:
                printf("PIB:\n");
                printf("%s: R$ %.2f\n", pais1, pib1);
                printf("%s: R$ %.2f\n", pais2, pib2);
                if (pib1 > pib2)
                    printf("Resultado: %s venceu!\n", pais1);
                else if (pib2 > pib1)
                    printf("Resultado: %s venceu!\n", pais2);
                else
                    printf("Resultado: Empate!\n");
                break;

            case 4:
                printf("Pontos Turísticos:\n");
                printf("%s: %d pontos\n", pais1, pontos1);
                printf("%s: %d pontos\n", pais2, pontos2);
                if (pontos1 > pontos2)
                    printf("Resultado: %s venceu!\n", pais1);
                else if (pontos2 > pontos1)
                    printf("Resultado: %s venceu!\n", pais2);
                else
                    printf("Resultado: Empate!\n");
                break;

            case 5:
                printf("Densidade Demográfica:\n");
                printf("%s: %.2f hab/km²\n", pais1, densidade1);
                printf("%s: %.2f hab/km²\n", pais2, densidade2);
                if (densidade1 < densidade2)
                    printf("Resultado: %s venceu!\n", pais1);
                else if (densidade2 < densidade1)
                    printf("Resultado: %s venceu!\n", pais2);
                else
                    printf("Resultado: Empate!\n");
                break;

            case 0:
                printf("Saindo do jogo...\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}
