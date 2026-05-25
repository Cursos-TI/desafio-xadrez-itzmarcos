#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.


// ======================================
// Função recursiva da Torre
// Movimento: 5 casas para a direita
// ======================================

void moverTorre(int casas) {

    // Condição de parada
    if(casas == 0) {
        return;
    }

    printf("Direita\n");

    // Chamada recursiva
    moverTorre(casas - 1);
}


// ======================================
// Função recursiva da Rainha
// Movimento: 8 casas para a esquerda
// ======================================

void moverRainha(int casas) {

    // Condição de parada
    if(casas == 0) {
        return;
    }

    printf("Esquerda\n");

    // Chamada recursiva
    moverRainha(casas - 1);
}


// ======================================
// Função recursiva do Bispo
// Movimento: 5 casas na diagonal
// (Cima + Direita)
//
// Utiliza:
// - Recursividade
// - Loops aninhados
// ======================================

void moverBispo(int casas) {

    // Condição de parada
    if(casas == 0) {
        return;
    }

    int vertical;
    int horizontal;

    // Loop externo -> vertical
    for(vertical = 1; vertical <= 1; vertical++) {

        // Loop interno -> horizontal
        for(horizontal = 1; horizontal <= 1; horizontal++) {

            printf("Cima Direita\n");
        }
    }

    // Chamada recursiva
    moverBispo(casas - 1);
}


// ======================================
// Função principal
// ======================================

int main() {

    // ==================================
    // Movimento da Torre
    // ==================================

    printf("Movimento da Torre:\n");

    moverTorre(5);

    printf("\n");


    // ==================================
    // Movimento do Bispo
    // ==================================

    printf("Movimento do Bispo:\n");

    moverBispo(5);

    printf("\n");


    // ==================================
    // Movimento da Rainha
    // ==================================

    printf("Movimento da Rainha:\n");

    moverRainha(8);

    printf("\n");


    // ==================================
    // Movimento do Cavalo
    //
    // Movimento em "L":
    // 2 casas para cima
    // 1 casa para a direita
    //
    // Utilizando:
    // - Loops aninhados
    // - continue
    // - break
    // ==================================

    printf("Movimento do Cavalo:\n");

    int linha;
    int coluna;

    // Movimento vertical
    for(linha = 1; linha <= 2; linha++) {

        // Exibe duas vezes "Cima"
        printf("Cima\n");
    }

    // Movimento horizontal
    for(coluna = 1; coluna <= 2; coluna++) {

        // Ignora a segunda repetição
        if(coluna > 1) {
            continue;
        }

        printf("Direita\n");

        // Encerra o loop após mover uma vez
        break;
    }

    return 0;
}