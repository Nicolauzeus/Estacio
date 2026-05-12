#include <stdio.h>
#include <unistd.h> // Para usleep() em sistemas Unix/Linux

int main() {
    int msg;
    int movimento;
    int escolha_peca;

    // 1. ESTRUTURA WHILE: Validação Rigorosa
    printf("Digite 1 para iniciar o Sistema de Xadrez: ");
    scanf("%d", &msg);

    while (msg != 1) {
        printf("Comando incorreto. Digite exatamente '1' para começar: ");
        scanf("%d", &msg);
    }

    // 2. ESTRUTURA FOR: Processamento com limite definido
    // Vamos simular o carregamento das 8 colunas do tabuleiro
    printf("\nPreparando o tabuleiro...\n");
    for (int i = 1; i <= 8; i++) {
        printf("[Fila %d] Carregando pecas...\n", i);
        usleep(200000); // Opcional: pausa de 200ms para efeito visual
    }
    printf("Tabuleiro Pronto! Vamos começar!\n\n");

    // 3. ESTRUTURA DO-WHILE: Menu de Repetição
    // Garante a execução e testa a saída no fim
    do {
        printf("==============================\n");
        printf("Escolha a peca que deseja mover:\n");
        printf("1-Peao | 2-Cavalo | 3-Bispo | 4-Torre | 5-Rainha | 6-Rei | 0-Sair\n");
        printf("Sua escolha: ");
        scanf("%d", &escolha_peca);

        if (escolha_peca == 0) break; // Sai do switch e do loop

        switch (escolha_peca) {
            case 1:
                printf("\n--- PEAO ---\nMove-se para frente.\n1-Uma casa | 2-Duas casas: ");
                scanf("%d", &movimento);
                if (movimento == 1) printf("Sucesso: Peao avancou 1 casa.\n");
                else if (movimento == 2) printf("Sucesso: Peao avancou 2 casas.\n");
                else printf("Movimento invalido.\n");
                break;

            case 2:
                printf("\n--- CAVALO ---\nMove-se em L.\n1-Direta | 2-Esquerda: ");
                scanf("%d", &movimento);
                if (movimento == 1) printf("Sucesso: Cavalo moveu-se para a direita.\n");
                else if (movimento == 2) printf("Sucesso: Cavalo moveu-se para a esquerda.\n");
                else printf("Movimento invalido.\n");
                break;

            case 3:
                printf("\n--- BISPO ---\nMove-se na diagonal.\n1-Cima Direita | 2-Cima Esquerda: ");
                scanf("%d", &movimento);
                if (movimento == 1) printf("Sucesso: Bispo moveu-se para cima direita.\n");
                else if (movimento == 2) printf("Sucesso: Bispo moveu-se para cima esquerda.\n");
                else printf("Movimento invalido.\n");
                break;

            case 4:
                printf("\n--- TORRE ---\nMove-se em linha reta.\n1-Direita | 2-Esquerda: ");
                scanf("%d", &movimento);
                if (movimento == 1) printf("Sucesso: Torre moveu-se para a direita.\n");
                else if (movimento == 2) printf("Sucesso: Torre moveu-se para a esquerda.\n");
                else printf("Movimento invalido.\n");
                break;

            case 5:
                printf("\n--- RAINHA ---\nMove-se em todas as direcoes.\n1-Cima | 2-Baixo | 3-Direita | 4-Esquerda: ");
                scanf("%d", &movimento);
                if (movimento == 1) printf("Sucesso: Rainha moveu-se para cima.\n");
                else if (movimento == 2) printf("Sucesso: Rainha moveu-se para baixo.\n");
                else if (movimento == 3) printf("Sucesso: Rainha moveu-se para a direita.\n");
                else if (movimento == 4) printf("Sucesso: Rainha moveu-se para a esquerda.\n");
                else printf("Movimento invalido.\n");
                break;

            case 6:
                printf("\n--- REI ---\nMove-se uma casa em qualquer direcao.\n1-Cima | 2-Baixo | 3-Direita | 4-Esquerda: ");
                scanf("%d", &movimento);
                if (movimento == 1) printf("Sucesso: Rei moveu-se para  cima.\n");
                else if (movimento == 2) printf("Sucesso: Rei moveu-se para baixo.\n");
                else if (movimento == 3) printf("Sucesso: Rei moveu-se para a direita.\n");
                else if (movimento == 4) printf("Sucesso: Rei moveu-se para a esquerda.\n");
                else printf("Movimento invalido.\n");
                break;
            
            case 0:
                printf("Encerrando programa...\n");
                break;

            default:
                printf("Opcao de peca inexistente!\n");
                break;
        }
        printf("\n"); // Espaço para não embolar o menu

    } while (escolha_peca != 0);

    printf("Sistema encerrado. Obrigado por jogar!\n");

    return 0;
}