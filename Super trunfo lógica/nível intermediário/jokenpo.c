#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int jogador, computador;


do {
        printf("Jokenpo - Escolha sua jogada:\n");
        printf("0 - Pedra\n");
        printf("1 - Papel\n");
        printf("2 - Tesoura\n");
        printf("Digite sua jogada: ");
        scanf("%d", &jogador);

        if (jogador < 0 || jogador > 2) {
            printf("Jogada inválida! Por favor, escolha entre 0, 1 ou 2.\n");
        }
    } while (jogador < 0 || jogador > 2); // Continua solicitando até que uma jogada válida seja feita 


    srand(time(0)); // Inicializa a semente para geração de números aleatórios
    computador = rand() % 3; // Gera um número aleatório entre 0 e 2


    if (jogador < 0 || jogador > 2) {
        printf("Jogada inválida! Por favor, escolha entre 0, 1 ou 2.\n");
        return 1; // Encerra o programa com código de erro
    }

    if (computador == 0) {
        printf("Computador escolheu: Pedra\n");
    } else if (computador == 1) {
        printf("Computador escolheu: Papel\n");
    } else {
        printf("Computador escolheu: Tesoura\n");
    }

    if (jogador == computador) {
        printf("Empate!\n");
    } else if ((jogador == 0 && computador == 2) || 
                (jogador == 1 && computador == 0) || 
                (jogador == 2 && computador == 1))
                {
        printf("Você venceu!\n");
    } else {
        printf("Computador venceu!\n");
    }

    return 0;
}