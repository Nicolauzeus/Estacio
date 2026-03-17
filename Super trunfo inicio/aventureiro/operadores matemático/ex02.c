#include <stdio.h>

int main() {
    int a, b;
    int opcao;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);

    printf("\nEscolha a operação:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Resultado da soma: %d\n", a + b);
            break;

        case 2:
            printf("Resultado da subtração: %d\n", a - b);
            break;

        case 3:
            printf("Resultado da multiplicação: %d\n", a * b);
            break;

        case 4:
            if (b != 0)
                printf("Resultado da divisão: %.2f\n", (float)a / b);
            else
                printf("Erro: divisão por zero não é permitida.\n");
            break;

        default:
            printf("Opção inválida.\n");
    }

    return 0;
}