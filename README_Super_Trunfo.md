# 🃏 Super Trunfo - Jogo de Comparação de Cartas

Este é um projeto de **Super Trunfo** em **C**, onde simulamos o jogo utilizando cartas de **países** e comparamos os atributos dessas cartas. O jogo permite ao usuário selecionar dois atributos para comparar, calcular diversos índices como **Densidade Demográfica** e **PIB per Capita**, além de permitir a escolha do atributo de comparação via menu interativo.

---

## 📋 Funcionalidades

- **Cadastro de Cartas**: O programa simula um cadastro de cartas com informações de **países** como **População**, **Área**, **PIB**, **Pontos Turísticos**, **Densidade Demográfica** e **PIB per Capita**.
- **Menu Interativo**: O jogador pode escolher os atributos para comparar entre as cartas, utilizando um menu dinâmico implementado com a estrutura `switch`.
- **Comparação de Atributos**: O programa compara os valores dos atributos selecionados e determina a carta vencedora.
- **Regras de Comparação**: A regra geral é que vence a carta com o maior valor no atributo. A exceção é a **Densidade Demográfica**, onde a carta com o menor valor vence.
- **Soma dos Atributos**: O sistema calcula a soma dos dois atributos selecionados para determinar a carta vencedora.
- **Tratamento de Empates**: Caso as somas sejam iguais, o programa informa "Empate!".
- **Interatividade e Feedback**: O programa fornece feedback claro ao jogador sobre as escolhas feitas e o resultado da comparação.

---

## 🛠️ Requisitos

- **Linguagem**: C
- **Compilador**: GCC (ou qualquer outro compilador C)
- **Sistema Operacional**: Funciona em sistemas baseados em Unix (Linux, macOS) e Windows com ambiente C adequado.

---