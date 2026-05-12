#include <stdio.h>

int main() {

    // =========================
    // Movimento da Torre
    // =========================
    // A Torre vai se mover 5 casas para a direita
    // Utilizando a estrutura FOR

    int i;

    printf("Movimento da Torre:\n");

    for(i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Linha em branco para separar os movimentos
    printf("\n");


    // =========================
    // Movimento do Bispo
    // =========================
    // O Bispo vai se mover 5 casas na diagonal
    // para cima e à direita
    // Utilizando a estrutura WHILE

    int contadorBispo = 1;

    printf("Movimento do Bispo:\n");

    while(contadorBispo <= 5) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // Linha em branco para separar os movimentos
    printf("\n");


    // =========================
    // Movimento da Rainha
    // =========================
    // A Rainha vai se mover 8 casas para a esquerda
    // Utilizando a estrutura DO-WHILE

    int contadorRainha = 1;

    printf("Movimento da Rainha:\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while(contadorRainha <= 8);


    return 0;
}