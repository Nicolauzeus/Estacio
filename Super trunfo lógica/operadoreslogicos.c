#include <stdio.h>

/*
Operadores lógicos são usados para combinar expressões condicionais.
Eles retornam um valor booleano (verdadeiro ou falso) com base na avaliação das expressões.*/

int main() {
    int a = 5;
    int b = 10;

    // Operador lógico AND (&&)
    if (a < b && a > 0) {
        printf("A é menor que B e maior que 0\n");
    }

    // Operador lógico OR (||)
    if (a < b || a > 0) {
        printf("A é menor que B ou maior que 0\n");
    }

    // Operador lógico NOT (!)
    if (!(a > b)) {
        printf("A não é maior que B\n");
    } else {
        printf("A é maior que B\n");
    }

    return 0;
}