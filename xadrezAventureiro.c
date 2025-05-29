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

int main() {
    // Definindo constantes para o número de casas que cada peça pode se mover
    // Torre deverá se mover 5 casas para direita
    // Bispo deverá se mover 5 casas na diagonal direita/ cima
    // Rainha deverá se mover 8 casas para a esquerda
    // Cavalo deverá se mover 2 casas para baixo e 1 para esquerda
    int movTorre = 5;
    int movBispo = 5;
    int movRainha = 8;
    int movCavalo1 = 2;
    int movCavalo2 = 1;
    int i = 1;

    // Movimentação da Torre
    printf ("Será realizada a movimentaçao da Torre\n");
    while (i <= movTorre) {
        printf("Direita\n");
        i++;
    }
    printf("A Torre se moveu para a direita %d vezes\n", movTorre);

    i = 1; // Resetando o contador para a próxima movimentação
    
    // Movimentação do Bispo
   printf("Será realizada a movimentaçao do Bispo\n");
    do {
    printf ("Direita Cima\n");
        i++;
   }
    while (i <= movBispo);
    printf("O Bispo se moveu %d vezes na diagonal Direita e Cima\n", movBispo);

    i = 1; // Resetando o contador para a próxima movimentação

    // Movimentação da Rainha
    printf("Será realizada a movimentaçao da Rainha\n");
    for (i=1; i<=movRainha; i++) {
        printf("Esquerda\n");
    }
    printf("A Rainha se moveu %d vezes para a esquerda\n", movRainha);

    i = 1; // Resetando o contador para a próxima movimentação

    // Movimentação do Cavalo
    printf("Será realizada a movimentaçao do Cavalo\n");
    for (i=1; i<=movCavalo2; i++) {
        for (int j=1; j<=movCavalo1; j++) {
            printf("Baixo\n");
        }
        printf(" Esquerda\n");
    }
    printf("O Cavalo se moveu %d vezes para baixo e %d vezes para a esquerda\n", movCavalo1, movCavalo2);


    i = 1;
    j = 1; // Resetando o contador para a próxima movimentação

    // Movimentação do Cavalo 2 utilizando novas estruturas de repetição
    while (i<=movCavalo2) {
        while (j<=movCavalo1) {
            printf("Baixo\n");
            j++;
        }
        printf("Esquerda\n");
        i++;
    }
    printf("O Cavalo se moveu %d vezes para baixo e %d vezes para a esquerda\n", movCavalo1, movCavalo2);
    return 0;
}
