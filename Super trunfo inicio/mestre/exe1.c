#include <stdio.h>

int main() {

    /*
    Este programa demonstra o comportamento de diferentes tipos inteiros em C.
    Cada tipo possui um tamanho em memória diferente e, por consequência,
    um limite diferente de valores que podem ser armazenados.

    Pergunta importante:
    Qual tipo suporta o maior número positivo? 
    Qual consegue representar números negativos?
    */

    // unsigned long int: armazena apenas números positivos (incluindo zero)
    // geralmente ocupa 8 bytes em sistemas modernos
    // suporta valores muito grandes, pois não precisa reservar espaço para sinal
    unsigned long int numeroGrandePositivo = 4000000000;

    // long int: aceita números positivos e negativos
    // como precisa armazenar o sinal (+ ou -), o limite positivo é menor
    long int numeroPositivo = 4000000000;

    // long long int: criado para armazenar números inteiros ainda maiores
    // também suporta valores negativos
    // normalmente usa 8 bytes e suporta números muito grandes
    long long int numeroGrandeNegativo = 4000000000;

    // unsigned int: versão sem sinal do int
    // armazena apenas números positivos
    // o limite máximo é maior que o int tradicional
    unsigned int numeroGrandePositivo2  = 4000000000;

    // int: tipo inteiro padrão em C
    // suporta números positivos e negativos
    // geralmente tem limite menor (aprox. -2 bilhões até +2 bilhões)
    // colocar 4000000000 aqui pode causar overflow dependendo do sistema
    int numeroGrande = 4000000000;

    // short int: usa menos memória que int
    // indicado para números pequenos
    // limite aproximado: -32768 até 32767
    short int numeroPequeno = 23;

    // Impressão dos valores usando os especificadores corretos de printf

    printf("Número grande positivo (unsigned long int): %lu\n", numeroGrandePositivo);
    printf("Número positivo (long int): %ld\n", numeroPositivo);
    printf("Número grande (long long int): %lld\n", numeroGrandeNegativo);
    printf("Número grande positivo 2 (unsigned int): %u\n", numeroGrandePositivo2);
    printf("Número grande (int): %d\n", numeroGrande);
    printf("Número pequeno (short int): %hd\n", numeroPequeno);

    return 0;
}
