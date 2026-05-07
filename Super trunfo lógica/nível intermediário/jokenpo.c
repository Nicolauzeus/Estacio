#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int jogador, computador;


do {
        printf("Jokenpo - Escolha sua jogada:\n");
        printf("1 - Pedra\n");
        printf("2 - Papel\n");
        printf("3 - Tesoura\n");
        printf("Digite sua jogada: ");
        scanf("%d", &jogador);

        if (jogador < 1 || jogador > 3) {
            printf("Jogada inválida! Por favor, escolha entre 1, 2 ou 3.\n");
        }
    } while (jogador < 1 || jogador > 3); // Continua solicitando até que uma jogada válida seja feita 

    if (jogador == 1) {
    printf("Você escolheu: Pedra\n");
    } else if (jogador == 2) {
    printf("Você escolheu: Papel\n");
    } else {
    printf("Você escolheu: Tesoura\n");
    }



    srand(time(0)); // Inicializa a semente para geração de números aleatórios
    computador = rand() % 3 + 1; // Gera um número aleatório entre 0 e 2

    
    if (computador == 1) {
        printf("Computador escolheu: Pedra\n");
    } else if (computador == 2) {
        printf("Computador escolheu: Papel\n");
    } else {
        printf("Computador escolheu: Tesoura\n");
    }

    if (jogador == computador) {
        printf("Empate!\n");
    } else if ((jogador == 1 && computador == 3) || 
                (jogador == 2 && computador == 1) || 
                (jogador == 3 && computador == 2))
                {
        printf("Você venceu!\n");
    } else {
        printf("Computador venceu!\n");
    }

    return 0;
}