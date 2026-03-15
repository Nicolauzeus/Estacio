#include <stdio.h>
#include <string.h>

int main() {

    /*
    ==========================================================
    DECLARAÇÃO DAS VARIÁVEIS
    ==========================================================
    O programa simula duas cartas de cidades (Carta 1 e Carta 2).
    Algumas informações são apenas descritivas e outras serão
    utilizadas para calcular o "SuperPoder" da cidade.
    */

    /* -------- Atributos descritivos (não entram no cálculo) -------- */

    char estado1, estado2;                 // Letra que representa o estado
    char nomeDaCidade1[30], nomeDaCidade2[30];  // Nome da cidade
    char codigo1[5], codigo2[5];           // Código identificador da cidade

    /* -------- Atributos numéricos usados no cálculo -------- */

    unsigned long int populacao1, populacao2;   // Número de habitantes
    unsigned int pontoTuristico1, pontoTuristico2; // Quantidade de pontos turísticos
    float area1, area2;                          // Área da cidade em km²
    float pib1, pib2;                            // PIB da cidade


    /*
    ==========================================================
    LEITURA DOS DADOS DA CARTA 1
    ==========================================================
    O usuário informa os dados da primeira cidade.
    */

    printf("=== Forneça a informação da Carta 1 ===\n");

    printf("Estado 1: ");
    scanf(" %c", &estado1);   // espaço antes de %c evita leitura do ENTER

    getchar(); // remove o ENTER que fica no buffer após scanf

    printf("Nome da Cidade 1: ");
    fgets(nomeDaCidade1, 30, stdin);

    // remove o caractere de quebra de linha (\n) que o fgets captura
    nomeDaCidade1[strcspn(nomeDaCidade1, "\n")] = '\0';

    printf("Código da cidade 1: ");
    scanf("%4s", codigo1); // limita leitura para evitar estouro de memória

    printf("Número da população 1: ");
    scanf("%lu", &populacao1);

    printf("Quantidade de pontos turísticos 1: ");
    scanf("%u", &pontoTuristico1);

    printf("Área da cidade (km²) 1: ");
    scanf("%f", &area1);

    printf("PIB da cidade 1: ");
    scanf("%f", &pib1);



    /*
    ==========================================================
    LEITURA DOS DADOS DA CARTA 2
    ==========================================================
    O mesmo processo é repetido para a segunda cidade.
    */

    printf("\n=== Forneça a informação da Carta 2 ===\n");

    printf("Estado 2: ");
    scanf(" %c", &estado2);

    getchar(); // limpa o ENTER novamente

    printf("Nome da Cidade 2: ");
    fgets(nomeDaCidade2, 30, stdin);
    nomeDaCidade2[strcspn(nomeDaCidade2, "\n")] = '\0';

    printf("Código da cidade 2: ");
    scanf("%4s", codigo2);

    printf("Número da população 2: ");
    scanf("%lu", &populacao2);

    printf("Quantidade de pontos turísticos 2: ");
    scanf("%u", &pontoTuristico2);

    printf("Área da cidade (km²) 2: ");
    scanf("%f", &area2);

    printf("PIB da cidade 2: ");
    scanf("%f", &pib2);



    /*
    ==========================================================
    CÁLCULOS DERIVADOS DAS INFORMAÇÕES
    ==========================================================
    Aqui calculamos alguns indicadores importantes das cidades.
    */

    // Densidade populacional = habitantes por km²
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // PIB per capita = riqueza média por habitante
    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // Inverso da densidade populacional (km² por habitante)
    // Quanto maior, mais espaço disponível por pessoa
    float inversoDensidade1 = area1 / populacao1;
    float inversoDensidade2 = area2 / populacao2;



    /*
    ==========================================================
    CÁLCULO DO SUPER PODER DAS CIDADES
    ==========================================================
    O SuperPoder é a soma de vários atributos da cidade.
    Isso permite comparar qual cidade possui melhores
    características gerais.
    */

    float SuperPoder1 =
        populacao1 +
        pontoTuristico1 +
        area1 +
        pib1 +
        pibPerCapita1 +
        inversoDensidade1;

    float SuperPoder2 =
        populacao2 +
        pontoTuristico2 +
        area2 +
        pib2 +
        pibPerCapita2 +
        inversoDensidade2;



    /*
    ==========================================================
    RESULTADO FINAL
    ==========================================================
    Exibição do resultado -da comparação dos valores de cada atributo de cada carta e o valor final de SuperPoder para cada carta. 
    */

printf("\n===== COMPARAÇÃO DE CARTAS =====\n");

/* 
Se Carta 1 tiver valor maior que Carta 2,
a expressão retorna 1 (verdadeiro).
Caso contrário retorna 0 (falso).
*/

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);

    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);

    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);

    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontoTuristico1 > pontoTuristico2);

/*
Para densidade populacional a lógica é inversa:
vence quem tem MENOR densidade
*/

    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);

    printf("Super Poder: Carta 1 venceu (%d)\n", SuperPoder1 > SuperPoder2);


    printf("\n===== RESULTADO FINAL =====\n");

    printf("SuperPoder da Carta 1: %.2f\n", SuperPoder1);
    printf("SuperPoder da Carta 2: %.2f\n", SuperPoder2);



    return 0;
}
