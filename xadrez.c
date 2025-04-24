#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita
    int i;
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n"); // Torre se move para a direita
    }

    // Movimento do Bispo: 5 casas na diagonal (Cima e Direita)
    printf("\nMovimento do Bispo (5 casas na diagonal Cima, Direita):\n");
    i = 0;
    while (i < 5) {
        printf("Cima Direita\n"); // Bispo se move na diagonal para cima e direita
        i++;
    }

    // Movimento da Rainha: 8 casas para a esquerda
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    i = 0;
    do {
        printf("Esquerda\n"); // Rainha se move para a esquerda
        i++;
    } while (i < 8);

    // Movimento do Cavalo: 2 casas para baixo e 1 para a esquerda
    printf("\nMovimento do Cavalo (2 casas para baixo e 1 para a esquerda):\n");
    for (i = 0; i < 2; i++) {
        printf("Baixo\n"); // Cavalo se move 2 casas para baixo
    }

    int j = 0;
    while (j < 1) {
        printf("Esquerda\n"); // Cavalo se move 1 casa para a esquerda
        j++;
    }

    return 0;
}
