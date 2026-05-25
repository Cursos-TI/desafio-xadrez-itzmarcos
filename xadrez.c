#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
 

    // =========================
    // Movimento da Torre
    // Utilizando FOR
    // Torre: 5 casas para a direita
    // =========================
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    
    int i;

    printf("Movimento da Torre:\n");

    for(i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Linha em branco para separar os movimentos
    printf("\n");


    // =========================
    // Movimento do Bispo
    // Utilizando WHILE
    // Bispo: 5 casas na diagonal
    // (Cima e Direita)
    // =========================

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    int contadorBispo = 1;

    printf("Movimento do Bispo:\n");

    while(contadorBispo <= 5) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // Linha em branco para separar os movimentos
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    // =========================
    // Movimento da Rainha
    // Utilizando DO-WHILE
    // Rainha: 8 casas para a esquerda
    // =========================

    int contadorRainha = 1;

    printf("Movimento da Rainha:\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while(contadorRainha <= 8);

// Linha em branco para separar os movimentos
    printf("\n");
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    // =========================
    // Movimento do Cavalo
    // Utilizando LOOPS ANINHADOS
    //
    // Movimento em "L":
    // 2 casas para baixo
    // 1 casa para a esquerda
    //
    // Estruturas utilizadas:
    // FOR + WHILE
    // =========================

    int movimentoCavalo;
    int contadorHorizontal;

    printf("Movimento do Cavalo:\n");

    // Loop FOR controla o movimento vertical
    for(movimentoCavalo = 1; movimentoCavalo <= 2; movimentoCavalo++) {
        printf("Baixo\n");

        // Loop WHILE aninhado
        // Executa apenas após o segundo movimento para baixo
        if(movimentoCavalo == 2) {

            contadorHorizontal = 1;

            while(contadorHorizontal <= 1) {
                printf("Esquerda\n");
                contadorHorizontal++;
            }
        }
    }

    return 0;
}
