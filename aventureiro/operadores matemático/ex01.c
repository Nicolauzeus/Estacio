#include <stdio.h>

int main() {
    int a, b;

    printf("Digite dois números: ");
    scanf("%d %d", &a, &b);

    printf("Soma: %d\nSubtração: %d\nMultiplicação: %d\n", a + b, a - b, a * b);

    if (b != 0) 
        printf("Divisão: %.2f\n", (float)a / b);
    else 
        printf("Divisão por zero não permitida.\n");

    return 0;
}