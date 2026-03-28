#include <stdio.h>
#include <string.h>

int main() {

    char nomeDaCidade1[30], nomeDaCidade2[30];
    unsigned long int populacao1, populacao2;
    unsigned int pontoTuristico1, pontoTuristico2;
    float area1, area2, pib1, pib2;

    // ===== DADOS DAS CARTAS =====
    printf("Cidade 1: ");
    fgets(nomeDaCidade1, 30, stdin);
    nomeDaCidade1[strcspn(nomeDaCidade1, "\n")] = '\0';

    printf("População 1: ");
    scanf("%lu", &populacao1);

    printf("Área 1: ");
    scanf("%f", &area1);

    printf("PIB 1: ");
    scanf("%f", &pib1);

    printf("Pontos turísticos 1: ");
    scanf("%u", &pontoTuristico1);

    getchar();

    printf("\nCidade 2: ");
    fgets(nomeDaCidade2, 30, stdin);
    nomeDaCidade2[strcspn(nomeDaCidade2, "\n")] = '\0';

    printf("População 2: ");
    scanf("%lu", &populacao2);

    printf("Área 2: ");
    scanf("%f", &area2);

    printf("PIB 2: ");
    scanf("%f", &pib2);

    printf("Pontos turísticos 2: ");
    scanf("%u", &pontoTuristico2);

    // ===== CÁLCULOS =====
    float densidade1 = (area1 != 0) ? populacao1 / area1 : 0;
    float densidade2 = (area2 != 0) ? populacao2 / area2 : 0;

    // ===== MENU =====
    int opcao;

    printf("\n===== MENU =====\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    printf("\n===== RESULTADO =====\n");

    // ===== SWITCH =====
    switch(opcao) {

        case 1:
            printf("Comparando POPULAÇÃO\n");
            printf("%s: %lu\n", nomeDaCidade1, populacao1);
            printf("%s: %lu\n", nomeDaCidade2, populacao2);

            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", nomeDaCidade1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", nomeDaCidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Comparando ÁREA\n");

            if (area1 > area2)
                printf("Vencedor: %s\n", nomeDaCidade1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", nomeDaCidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Comparando PIB\n");

            if (pib1 > pib2)
                printf("Vencedor: %s\n", nomeDaCidade1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", nomeDaCidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Comparando PONTOS TURÍSTICOS\n");

            if (pontoTuristico1 > pontoTuristico2)
                printf("Vencedor: %s\n", nomeDaCidade1);
            else if (pontoTuristico2 > pontoTuristico1)
                printf("Vencedor: %s\n", nomeDaCidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Comparando DENSIDADE (menor vence)\n");

            if (densidade1 < densidade2)
                printf("Vencedor: %s\n", nomeDaCidade1);
            else if (densidade2 < densidade1)
                printf("Vencedor: %s\n", nomeDaCidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}