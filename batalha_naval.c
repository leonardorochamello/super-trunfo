#include <stdio.h>

#define TAM 10
#define TAM_HAB 5
#define NAVIO 3
#define HABILIDADE 5
#define AGUA 0

// Inicializa o tabuleiro com água
void inicializar_tabuleiro(int tabuleiro[TAM][TAM]) {
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            tabuleiro[i][j] = AGUA;
}

// Posiciona navio com direção (delta_linha, delta_coluna)
void posicionar_navio(int tabuleiro[TAM][TAM], int l, int c, int dl, int dc) {
    for (int i = 0; i < 3; i++) {
        int nl = l + i * dl;
        int nc = c + i * dc;
        if (nl >= 0 && nl < TAM && nc >= 0 && nc < TAM)
            tabuleiro[nl][nc] = NAVIO;
    }
}

// Cria matriz cone 5x5
void criar_matriz_cone(int matriz[TAM_HAB][TAM_HAB]) {
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            if (j >= TAM_HAB / 2 - i && j <= TAM_HAB / 2 + i)
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
        }
    }
}

// Cria matriz cruz 5x5
void criar_matriz_cruz(int matriz[TAM_HAB][TAM_HAB]) {
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            if (i == TAM_HAB / 2 || j == TAM_HAB / 2)
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
        }
    }
}

// Cria matriz octaedro (losango) 5x5
void criar_matriz_octaedro(int matriz[TAM_HAB][TAM_HAB]) {
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            if (abs(i - TAM_HAB / 2) + abs(j - TAM_HAB / 2) <= TAM_HAB / 2)
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
        }
    }
}

// Aplica a matriz da habilidade no tabuleiro, usando valor 5
void aplicar_habilidade(int tabuleiro[TAM][TAM], int matriz[TAM_HAB][TAM_HAB], int origem_l, int origem_c) {
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            int l = origem_l - TAM_HAB / 2 + i;
            int c = origem_c - TAM_HAB / 2 + j;
            if (l >= 0 && l < TAM && c >= 0 && c < TAM && matriz[i][j] == 1 && tabuleiro[l][c] != NAVIO)
                tabuleiro[l][c] = HABILIDADE;
        }
    }
}

// Exibe o tabuleiro
void imprimir_tabuleiro(int tabuleiro[TAM][TAM]) {
    printf("\nTabuleiro:\n\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAM][TAM];
    inicializar_tabuleiro(tabuleiro);

    // Posiciona 4 navios
    posicionar_navio(tabuleiro, 1, 1, 0, 1);  // horizontal
    posicionar_navio(tabuleiro, 3, 5, 1, 0);  // vertical
    posicionar_navio(tabuleiro, 6, 6, 1, 1);  // diagonal ↘
    posicionar_navio(tabuleiro, 6, 3, 1, -1); // diagonal ↙

    // Matrizes das habilidades
    int cone[TAM_HAB][TAM_HAB], cruz[TAM_HAB][TAM_HAB], octaedro[TAM_HAB][TAM_HAB];
    criar_matriz_cone(cone);
    criar_matriz_cruz(cruz);
    criar_matriz_octaedro(octaedro);

    // Aplicar habilidades em pontos específicos
    aplicar_habilidade(tabuleiro, cone, 2, 2);
    aplicar_habilidade(tabuleiro, cruz, 5, 5);
    aplicar_habilidade(tabuleiro, octaedro, 8, 8);

    // Imprimir o tabuleiro final
    imprimir_tabuleiro(tabuleiro);

    return 0;
}
