#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

void moverTorre (int casas) {
    if (casas >0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverRainha (int casas) {
    if (casas >0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

void moverBispo (int casas) { 
    if (casas > 0) {
        printf("Direita Cima\n");
        moverBispo(casas - 1);
    }
}

void moverCavalo () {
    for (int i=1; i<=2; i++) {
        for (int j=1; j<=2; j++) {
            printf("Direita\n");
        }
        printf(" Cima\n");
        break;
}
}

int main() {
    // Definindo constantes para o número de casas que cada peça pode se mover
    // Torre deverá se mover 5 casas para direita
    // Bispo deverá se mover 5 casas na diagonal direita/ cima
    // Rainha deverá se mover 8 casas para a esquerda
    // Cavalo deverá se mover 2 casas para direita e 1 para Cima
    int movTorre = 5;
    int movBispo = 5;
    int movRainha = 8;
    int i = 1;

    // Movimentação da Torre
    printf("Movimentação da Torre:\n");
    moverTorre(movTorre);

    // Movimentação da Rainha
    printf("Movimentação da Rainha:\n");
    moverRainha(movRainha);

    // Movimentação do Bispo
    printf("Movimentação do Bispo:\n");
    moverBispo(movBispo);

    // Movimentação do Cavalo
    printf("Movimentação do Cavalo:\n");
    moverCavalo();

    return 0;
}
