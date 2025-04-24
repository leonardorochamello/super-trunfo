#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3
#define AGUA 0
#define NAVIO 3

// Função para verificar se um navio pode ser colocado sem ultrapassar os limites
int dentro_dos_limites(int linha, int coluna, int delta_linha, int delta_coluna) {
    int linha_final = linha + delta_linha * (TAMANHO_NAVIO - 1);
    int coluna_final = coluna + delta_coluna * (TAMANHO_NAVIO - 1);

    return (linha_final >= 0 && linha_final < TAMANHO_TABULEIRO &&
            coluna_final >= 0 && coluna_final < TAMANHO_TABULEIRO);
}

// Função para verificar se há sobreposição
int sem_sobreposicao(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO],
                     int linha, int coluna, int delta_linha, int delta_coluna) {
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        int l = linha + i * delta_linha;
        int c = coluna + i * delta_coluna;
        if (tabuleiro[l][c] == NAVIO) {
            return 0;
        }
    }
    return 1;
}

// Função para posicionar o navio
void posicionar_navio(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO],
                      int linha, int coluna, int delta_linha, int delta_coluna) {
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        int l = linha + i * delta_linha;
        int c = coluna + i * delta_coluna;
        tabuleiro[l][c] = NAVIO;
    }
}

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // Inicializa o tabuleiro com água
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    // Coordenadas e direções dos navios
    // delta_linha e delta_coluna indicam a direção:
    // horizontal: (0,1), vertical: (1,0), diagonal crescente: (1,1), diagonal decrescente: (1,-1)

    // Navio 1: horizontal em (1,2)
    if (dentro_dos_limites(1, 2, 0, 1) &&
        sem_sobreposicao(tabuleiro, 1, 2, 0, 1)) {
        posicionar_navio(tabuleiro, 1, 2, 0, 1);
    }

    // Navio 2: vertical em (5,6)
    if (dentro_dos_limites(5, 6, 1, 0) &&
        sem_sobreposicao(tabuleiro, 5, 6, 1, 0)) {
        posicionar_navio(tabuleiro, 5, 6, 1, 0);
    }

    // Navio 3: diagonal principal (↘) em (0,0)
    if (dentro_dos_limites(0, 0, 1, 1) &&
        sem_sobreposicao(tabuleiro, 0, 0, 1, 1)) {
        posicionar_navio(tabuleiro, 0, 0, 1, 1);
    }

    // Navio 4: diagonal secundária (↙) em (0, 9)
    if (dentro_dos_limites(0, 9, 1, -1) &&
        sem_sobreposicao(tabuleiro, 0, 9, 1, -1)) {
        posicionar_navio(tabuleiro, 0, 9, 1, -1);
    }

    // Exibe o tabuleiro
    printf("Tabuleiro de Batalha Naval:\n\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
