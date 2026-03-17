#include  <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int c = 5;

    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("a == b: %d\n", a == b); // comparação de igualdade
    printf("a == c: %d\n", a == c); // comparação de igualdade com o mesmo valor
    printf("a != b: %d\n", a != b); // comparação de desigualdade
    printf("a != c: %d\n", a != c); // comparação de desigualdade com o mesmo valor
    printf("a < b: %d\n", a < b); // comparação de menor que
    printf("a > b: %d\n", a > b); // comparação de maior que
    printf("a <= c: %d\n", a <= c); // comparação de menor ou igual
    printf("a >= c: %d\n", a >= c); // comparação de maior ou igual

    return 0;
}