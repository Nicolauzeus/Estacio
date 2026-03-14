#include <stdio.h>

int main () {
    /*
    Você aplicará conceitos de modificadores de tipos de dados e operadores relacionais para desenvolver um sistema
    de gerenciamento de inventário. Você implementará funcionalidades que permitem comparações entre diferentes produtos,
    como quantidade em estoque e valor total, utilizando operadores relacionais sem estruturas de controle.

    Além disso, aprenderá a manipular grandes números com precisão, usando modificadores de tipo como unsigned e long. 
    Esses conhecimentos são fundamentais para desenvolver sistemas robustos e eficientes, capazes de lidar com dados variados
    e realizar cálculos complexos de forma precisa.
    */

    char produtoA[30] = "Produto A";
    unsigned int quantidadeA = 100;
    unsigned int quantidademinimaA = 50;
    float valorUnitarioA = 10.50;
    double valorTotalA = quantidadeA * valorUnitarioA;


    char produtoB[30] = "Produto B";
    unsigned int quantidadeB = 150;
    unsigned int quantidademinimaB = 75;
    float valorUnitarioB = 15.75;
    double valorTotalB = quantidadeB * valorUnitarioB;


    printf ("Produto: %s\n", produtoA);
    printf ("Quantidade em estoque: %u\n", quantidadeA);
    printf ("Quantidade mínima: %u\n", quantidademinimaA);
    printf ("Valor unitário: %.2f R$\n", valorUnitarioA);
    printf ("Valor total: %.2f R$\n\n", valorTotalA);

    printf ("Produto: %s\n", produtoB);
    printf ("Quantidade em estoque: %u\n", quantidadeB);
    printf ("Quantidade mínima: %u\n", quantidademinimaB);
    printf ("Valor unitário: %.2f R$\n", valorUnitarioB);
    printf ("Valor total: %.2f R$\n\n", valorTotalB);



    // Comparação com o valor mímimo de estoque
    printf ("Comparação de estoque:\n");
    printf ("Produto A tem estoque suficiente? %d\n", quantidadeA >= quantidademinimaA);
    printf ("Produto B tem estoque suficiente? %d\n\n", quantidadeB >= quantidademinimaB);

    // Comparação de valor total
    printf ("Comparação de valor total:\n");
    printf ("Produto A é mais caro que Produto B? %d\n", valorTotalA > valorTotalB);
    printf ("Produto A é mais barato que Produto B? %d\n", valorTotalA < valorTotalB);
    printf ("Produto A tem o mesmo valor total que Produto B? %d\n", valorTotalA == valorTotalB);
    return 0;
}