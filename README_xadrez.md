# Simulador de Movimentos de Peças de Xadrez em C 🧠♟️

Este projeto em C simula os movimentos das principais peças do xadrez (Torre, Bispo, Rainha e Cavalo) utilizando estruturas de repetição, recursividade e loops aninhados. Ideal para praticar lógica de programação, controle de fluxo e chamadas recursivas.

## 🎯 Objetivos

- Simular os movimentos reais das peças no tabuleiro de xadrez.
- Aplicar estruturas de controle: `for`, `while`, `do-while`, recursividade e loops aninhados.
- Mostrar a saída no console com cada etapa dos movimentos.

## ✅ Peças e seus Movimentos

### 🔹 Torre
- **Movimento:** 5 casas para a direita.
- **Implementação:** Função recursiva.

### 🔹 Bispo
- **Movimento:** 5 casas na diagonal (cima + direita).
- **Implementação:** Função recursiva **e** loops aninhados.

### 🔹 Rainha
- **Movimento:** 8 casas para a esquerda.
- **Implementação:** Função recursiva.

### 🔹 Cavalo
- **Movimento:** 2 casas para cima e 1 para a direita (em "L").
- **Implementação:** Loops aninhados com múltiplas variáveis e controle de fluxo com `continue` e `break`.

## 🛠️ Tecnologias e Conceitos

- Linguagem C
- Estruturas de repetição: `for`, `while`, `do-while`
- Recursividade
- Loops aninhados
- Impressão formatada com `printf`

## 📂 Estrutura

```bash
.
├── main.c          # Código-fonte principal com todas as simulações
├── README.md       # Documentação do projeto
