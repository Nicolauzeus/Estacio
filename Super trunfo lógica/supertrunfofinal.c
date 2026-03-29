#include <stdio.h>

int main() {

    // ===== DADOS DAS CIDADES =====
    char nomeCidadeA[] = "Cidade A";
    char nomeCidadeB[] = "Cidade B";

    unsigned long int populacaoCidadeA = 500000;
    unsigned long int populacaoCidadeB = 300000;

    float areaCidadeA = 200.0;
    float areaCidadeB = 150.0;

    float pibCidadeA = 1000.0;
    float pibCidadeB = 900.0;

    unsigned int pontosTuristicosCidadeA = 10;
    unsigned int pontosTuristicosCidadeB = 8;

    float densidadeCidadeA = populacaoCidadeA / areaCidadeA;
    float densidadeCidadeB = populacaoCidadeB / areaCidadeB;

    // ===== ESCOLHA DO JOGADOR =====
    int escolhaCidadeJogador;

    printf("Escolha sua cidade:\n");
    printf("1 - %s\n", nomeCidadeA);
    printf("2 - %s\n", nomeCidadeB);
    printf("Opção: ");
    scanf("%d", &escolhaCidadeJogador);

    // Definir jogador e adversário
    char *nomeCidadeJogador;
    char *nomeCidadeAdversario;

    unsigned long int populacaoJogador, populacaoAdversario;
    float areaJogador, areaAdversario;
    float pibJogador, pibAdversario;
    unsigned int pontosTuristicosJogador, pontosTuristicosAdversario;
    float densidadeJogador, densidadeAdversario;

    if (escolhaCidadeJogador == 1) {
        nomeCidadeJogador = nomeCidadeA;
        nomeCidadeAdversario = nomeCidadeB;

        populacaoJogador = populacaoCidadeA;
        populacaoAdversario = populacaoCidadeB;

        areaJogador = areaCidadeA;
        areaAdversario = areaCidadeB;

        pibJogador = pibCidadeA;
        pibAdversario = pibCidadeB;

        pontosTuristicosJogador = pontosTuristicosCidadeA;
        pontosTuristicosAdversario = pontosTuristicosCidadeB;

        densidadeJogador = densidadeCidadeA;
        densidadeAdversario = densidadeCidadeB;

    } else {
        nomeCidadeJogador = nomeCidadeB;
        nomeCidadeAdversario = nomeCidadeA;

        populacaoJogador = populacaoCidadeB;
        populacaoAdversario = populacaoCidadeA;

        areaJogador = areaCidadeB;
        areaAdversario = areaCidadeA;

        pibJogador = pibCidadeB;
        pibAdversario = pibCidadeA;

        pontosTuristicosJogador = pontosTuristicosCidadeB;
        pontosTuristicosAdversario = pontosTuristicosCidadeA;

        densidadeJogador = densidadeCidadeB;
        densidadeAdversario = densidadeCidadeA;
    }

    // ===== ESCOLHA DOS ATRIBUTOS =====
    int atributoEscolhido1, atributoEscolhido2;

    printf("\nEscolha o PRIMEIRO atributo:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade\n");
    scanf("%d", &atributoEscolhido1);

    printf("\nEscolha o SEGUNDO atributo:\n");

    for (int opcao = 1; opcao <= 5; opcao++) {
        if (opcao != atributoEscolhido1) {
            switch (opcao) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos turísticos\n"); break;
                case 5: printf("5 - Densidade\n"); break;
            }
        }
    }

    scanf("%d", &atributoEscolhido2);

    if (atributoEscolhido1 == atributoEscolhido2) {
        printf("Erro: não pode repetir atributo.\n");
        return 0;
    }

    // ===== OBTENDO VALORES =====
    float valorJogadorAttr1, valorAdversarioAttr1;
    float valorJogadorAttr2, valorAdversarioAttr2;

    switch (atributoEscolhido1) {
        case 1: valorJogadorAttr1 = populacaoJogador; valorAdversarioAttr1 = populacaoAdversario; break;
        case 2: valorJogadorAttr1 = areaJogador; valorAdversarioAttr1 = areaAdversario; break;
        case 3: valorJogadorAttr1 = pibJogador; valorAdversarioAttr1 = pibAdversario; break;
        case 4: valorJogadorAttr1 = pontosTuristicosJogador; valorAdversarioAttr1 = pontosTuristicosAdversario; break;
        case 5: valorJogadorAttr1 = densidadeJogador; valorAdversarioAttr1 = densidadeAdversario; break;
    }

    switch (atributoEscolhido2) {
        case 1: valorJogadorAttr2 = populacaoJogador; valorAdversarioAttr2 = populacaoAdversario; break;
        case 2: valorJogadorAttr2 = areaJogador; valorAdversarioAttr2 = areaAdversario; break;
        case 3: valorJogadorAttr2 = pibJogador; valorAdversarioAttr2 = pibAdversario; break;
        case 4: valorJogadorAttr2 = pontosTuristicosJogador; valorAdversarioAttr2 = pontosTuristicosAdversario; break;
        case 5: valorJogadorAttr2 = densidadeJogador; valorAdversarioAttr2 = densidadeAdversario; break;
    }

    // ===== SOMA =====
    float somaAtributosJogador = valorJogadorAttr1 + valorJogadorAttr2;
    float somaAtributosAdversario = valorAdversarioAttr1 + valorAdversarioAttr2;

    // ===== RESULTADO =====
    printf("\n===== RESULTADO FINAL =====\n");

    printf("%s: %.2f + %.2f = %.2f\n",
        nomeCidadeJogador, valorJogadorAttr1, valorJogadorAttr2, somaAtributosJogador);

    printf("%s: %.2f + %.2f = %.2f\n",
        nomeCidadeAdversario, valorAdversarioAttr1, valorAdversarioAttr2, somaAtributosAdversario);

    if (somaAtributosJogador > somaAtributosAdversario)
        printf("Você venceu!\n");
    else if (somaAtributosAdversario > somaAtributosJogador)
        printf("Você perdeu!\n");
    else
        printf("Empate!\n");

    return 0;
}