#include <stdio.h>

// Função recursiva para o movimento da Torre (direita)
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o movimento da Rainha (esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o movimento do Bispo (diagonal cima-direita)
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Função com loops aninhados para reforçar o movimento do Bispo
void moverBispoComLoops(int casas) {
    printf("(Movimento adicional do Bispo com loops aninhados)\n");
    for (int vertical = 0; vertical < casas; vertical++) {
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima Direita\n");
        }
    }
}

// Movimento do Cavalo (duas casas para cima e uma para a direita) com loops complexos
void moverCavalo() {
    printf("Movimento do Cavalo (duas casas para cima e uma para a direita):\n");
    int i, j;
    for (i = 0; i < 3; i++) { // Controle da tentativa de movimento
        for (j = 0; j < 3; j++) { // Tentativas de variação (simulando múltiplas direções)
            if (i == 0 && j == 0) continue; // Pula iteração sem movimento
            if (i == 2 && j == 1) { // Condição para o movimento em "L"
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                break; // Encerra assim que o movimento correto for simulado
            }
        }
        if (i == 2) break;
    }
}

int main() {
    // Movimento da Torre
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(5);

    // Movimento do Bispo (recursivo e com loops aninhados)
    printf("\nMovimento do Bispo (5 casas na diagonal Cima Direita - recursivo):\n");
    moverBispoRecursivo(5);

    printf("\nMovimento do Bispo (com loops aninhados):\n");
    moverBispoComLoops(5);

    // Movimento da Rainha
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(8);

    // Movimento do Cavalo
    printf("\n");
    moverCavalo();

    return 0;
}
