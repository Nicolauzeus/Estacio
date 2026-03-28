#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcao;
    int numeroSecreto, palpite;
    int tentativasErradas = 0;

    printf("Menu Interativo:\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);


    switch (opcao) {
        case 1:
            printf("Iniciando o jogo...\n");

            srand(time(0));
            numeroSecreto = rand() % 10;
                do {
                printf("Digite seu palpite (0-9): ");
                scanf("%d", &palpite);

                if (palpite == numeroSecreto) {
                    printf("Parabéns! Você acertou o número secreto!\n");
                } else {
                    printf("Tente novamente!\n");
                    tentativasErradas++;
                }
            } while (palpite != numeroSecreto);
            printf("Número secreto %d\n", numeroSecreto);
            printf("Número de tentativas erradas: %d\n", tentativasErradas);
            break;
            
        case 2:
            printf("Regras do jogo:\n");
            printf("- O jogador deve adivinhar o número secreto entre 0 e 9.\n");
            printf("- O objetivo é adivinhar o número secreto com o menor número de tentativas.\n");
            break;
        case 3:
            printf("Saindo do programa...\n");
            break;
        default:
            printf("Opção inválida! Por favor, escolha uma opção válida.\n");
    }

    return 0;
}