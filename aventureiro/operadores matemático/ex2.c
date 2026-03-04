//incremento e decremento

#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;

    printf("Valor inicial de a: %d\n", a);
    printf("Valor inicial de b: %d\n", b);

    // Incremento
    a++; // a agora é 6
    b++; // b agora é 11

    printf("\nApós incremento:\n");
    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);

    // Decremento
    a--; // a agora é 5
    b--; // b agora é 10

    printf("\nApós decremento:\n");
    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);

    // Usando o operador de incremento em uma expressão
    int c = a++ + b; // c é 15, depois a é incrementado para 6
    printf("\nValor de c (a++ + b): %d\n", c);
    printf("Valor de a após expressão: %d\n", a);

    return 0;

}    