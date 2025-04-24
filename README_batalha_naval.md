# Batalha Naval - Jogo com Habilidades Especiais

Este projeto é uma implementação do clássico jogo de Batalha Naval com um toque de complexidade, incluindo **habilidades especiais** que afetam áreas do tabuleiro. O tabuleiro é um grid 10x10 onde navios são posicionados e podem ser atingidos por habilidades em formas de **cone**, **cruz** e **octaedro**.

## Funcionalidades

- **Tabuleiro 10x10**: Um campo de batalha com dimensões fixas onde os navios e habilidades são aplicados.
- **Posicionamento de Navios**: Dois navios são posicionados horizontalmente e verticalmente, e dois navios são posicionados na diagonal (como em um formato de "X").
- **Habilidades Especiais**:
  - **Cone**: Uma habilidade em forma de cone com a origem na parte superior e se expandindo para baixo.
  - **Cruz**: Uma habilidade em forma de cruz com a origem no centro.
  - **Octaedro**: Uma habilidade em formato de losango, que simula a vista frontal de um octaedro.
- **Representação Gráfica**: As áreas de efeito das habilidades são marcadas com o valor 5 no tabuleiro, enquanto os navios são representados com o valor 3, e a água é representada com o valor 0.

## Como Funciona

O programa segue o fluxo de:

1. **Inicialização** do tabuleiro 10x10 com valores de água.
2. **Posicionamento dos navios** no tabuleiro (horizontais, verticais e diagonais).
3. **Criação das matrizes de habilidades**: Cone, Cruz e Octaedro são definidas como matrizes 5x5.
4. **Aplicação das habilidades**: Cada habilidade tem um ponto de origem no tabuleiro e afeta áreas dentro de seus limites, marcando-as com o valor 5.
5. **Exibição do tabuleiro**: O tabuleiro é impresso no console mostrando a posição dos navios e as áreas afetadas pelas habilidades.

## Como Rodar

1. **Clonar o repositório**:
