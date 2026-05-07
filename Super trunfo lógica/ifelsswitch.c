#include <stdio.h>

/// @brief 
/// @return 
int main() {
    int opcao;
    float nota1, nota2, media;
    int valido;

    
    // ===== MENU COM VALIDAÇÃO =====
    do {
        printf("\nMenu de Gerenciamento de Estudantes\n");
        printf("1. Calcular Média\n");
        printf("2. Determinar Status\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");

        valido = scanf("%d", &opcao);

        if (valido != 1) {
            printf("Erro: digite um número inteiro válido!\n");
            while (getchar() != '\n');
            opcao = 0;
        } else if (opcao < 1 || opcao > 3) {
            printf("Opção inválida. Escolha entre 1 e 3.\n");
        }

    } while (opcao < 1 || opcao > 3);

    // ===== SWITCH =====
    switch (opcao) {

        case 1:

            // valida nota 1
            do {
                printf("Digite a primeira nota (0 a 10): ");
                scanf("%f", &nota1);

                if (nota1 < 0 || nota1 > 10) {
                    printf("Nota inválida!\n");
                }

            } while (nota1 < 0 || nota1 > 10);

            // valida nota 2
            do {
                printf("Digite a segunda nota (0 a 10): ");
                scanf("%f", &nota2);

                if (nota2 < 0 || nota2 > 10) {
                    printf("Nota inválida!\n");
                }

            } while (nota2 < 0 || nota2 > 10);

            media = (nota1 + nota2) / 2;
            printf("Média: %.2f\n", media);
            break;

        case 2:

            do {
                printf("Digite a média (0 a 10): ");
                scanf("%f", &media);

                if (media < 0 || media > 10) {
                    printf("Média inválida!\n");
                }

            } while (media < 0 || media > 10);

            if (media >= 7)
                printf("Aprovado\n");
            else if (media >= 5)
                printf("Recuperação\n");
            else
                printf("Reprovado\n");

            break;

        case 3:
            printf("Saindo...\n");
            break;
    }

    return 0;
}