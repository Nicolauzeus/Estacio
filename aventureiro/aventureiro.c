#include <stdio.h>
#include <string.h>

int main() {

    char estado1, estado2;
    char nomeDaCidade1[30], nomeDaCidade2[30];
    char codigo1[5], codigo2[5];

    int populacao1, populacao2, pontoTuristico1, pontoTuristico2;
    float area1, area2, pib1, pib2;

    printf("Forneça a informação da Carta 1:\n");

    printf("Estado 1: ");
    scanf(" %c", &estado1);

    getchar(); // limpa o ENTER do buffer

    printf("Nome da Cidade 1: ");
    fgets(nomeDaCidade1, 30, stdin);
    nomeDaCidade1[strcspn(nomeDaCidade1, "\n")] = '\0'; // remove o \n

    printf("Código da cidade 1: ");
    scanf("%s", codigo1);

    printf("Número da população 1: ");
    scanf("%d", &populacao1);

    printf("Quantidade de pontos turísticos 1: ");
    scanf("%d", &pontoTuristico1);

    printf("Área (km2) 1: ");
    scanf("%f", &area1);

    printf("PIB 1: ");
    scanf("%f", &pib1);


    printf("\nForneça a informação da Carta 2:\n");

    printf("Estado 2: ");
    scanf(" %c", &estado2);

    getchar(); // limpa o ENTER novamente

    printf("Nome da Cidade 2: ");
    fgets(nomeDaCidade2, 30, stdin);
    nomeDaCidade2[strcspn(nomeDaCidade2, "\n")] = '\0'; // remove o \n

    printf("Código da cidade 2: ");
    scanf("%s", codigo2);

    printf("Número da população 2: ");
    scanf("%d", &populacao2);

    printf("Quantidade de pontos turísticos 2: ");
    scanf("%d", &pontoTuristico2);

    printf("Área (km2) 2: ");
    scanf("%f", &area2);

    printf("PIB 2: ");
    scanf("%f", &pib2);


    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;


    printf("\n===== Dados da Carta 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("Código da cidade: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Pontos turísticos: %d\n", pontoTuristico1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Densidade populacional: %.2f habitantes/km2\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);


    printf("\n===== Dados da Carta 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("Código da cidade: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Pontos turísticos: %d\n", pontoTuristico2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Densidade populacional: %.2f habitantes/km2\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);

    return 0;
}