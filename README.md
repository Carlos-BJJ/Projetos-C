# 🏙️ Super Trunfo de Cidades - Jogo em C

## 📖 Sobre o Projeto
O **Super Trunfo de Cidades** é um jogo desenvolvido em **linguagem C**, O objetivo é comparar atributos entre duas cartas e determinar a vencedora.

---
## 🎯 **Estruturas Usadas**
- **Switch-case** .  
- **If-else** .  
- **Operador ternário** .  
- **Cálculo de métricas** .  

---

## 🏗️ **Desenvolvimento**
- **Indentação, comentários e boas práticas** foram usadas de maneira eficiente.
- **Validação de entradas** para evitar escolhas inválidas no menu.

---

# ♟️ Simulador de Xadrez - Movimentação em C

## 📖 Sobre o Projeto
O **Simulador de Xadrez** é um programa desenvolvido em **linguagem C** focado na demonstração técnica de trajetórias de peças no tabuleiro. O objetivo é utilizar diferentes tipos de repetição para simular os movimentos característicos da Torre, Bispo, Rainha e Cavalo.

---

## 🎯 **Estruturas Usadas**
- **Recursividade**: Aplicada na lógica da Torre e no movimento complexo do Cavalo.
- **Laços For, While e Do-While**: Cada peça utiliza um laço diferente para percorrer as casas.
- **Switch-case**: Estrutura central para gerenciar o menu de escolha das peças.
- **Funções e Procedimentos**: Modularização do código para cada tipo de movimento.

---

## 🏗️ **Desenvolvimento**
- **Lógica Modular**: Funções isoladas garantem um código limpo e de fácil manutenção.
- **Interface Visual**: Uso de ícones de xadrez (♜, ♝, ♛, ♞) e setas para facilitar a leitura no terminal.
- **Complexidade Algorítmica**: Implementação do movimento em "L" do Cavalo combinando laços e recursão.

---
# 🚢 Batalha Naval - Posicionamento e Habilidades em C

## 📖 Sobre o Projeto
O **Batalha Naval** é um programa desenvolvido em **linguagem C** que simula o tabuleiro de um jogo de estratégia. O foco deste código é o posicionamento avançado de navios e a aplicação de "habilidades" com áreas de efeito (AoE) utilizando lógica de matrizes.

---

## 🎯 **Estruturas Usadas**
- **Matrizes Bidimensionais**: Uso de matrizes $10 \times 10$ para o tabuleiro e matrizes menores para definir padrões de habilidades.
- **Laços Aninhados (`for`)**: Utilizados para preencher as coordenadas e renderizar o tabuleiro final.
- **Lógica Matemática**: Cálculos de distância e centro para criar formas geométricas (cones e octaedros).
- **Diretivas de Compilação (`#define`)**: Definição de constantes para facilitar o ajuste do tamanho do tabuleiro.

---

## 🏗️ **Desenvolvimento**
- **Navios Multi-direcionais**: Implementação de loops que permitem posicionar embarcações nas diagonais, horizontal e vertical.
- **Padrões de Habilidades**:
  - **Cone**: Preenchimento em formato triangular.
  - **Cruz**: Marcação de eixos horizontais e verticais a partir de um ponto.
  - **Octaedro**: Lógica de expansão centralizada.
- **Validação de Bordas**: Sistema de segurança que impede que habilidades ou navios "saiam" dos limites da matriz, evitando erros de execução.
  

