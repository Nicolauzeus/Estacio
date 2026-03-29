#include <stdio.h>

int main() {
    int num1, num2;
    char* resultado;

    printf("Informe um número: ");
    scanf("%d", &num1);

    printf("Informe mais um número: ");
    scanf("%d", &num2);

    resultado = (num1 >= num2)
        ? "O primeiro número é maior ou igual ao segundo"
        : "O segundo número é maior";

    printf("Resultado: %s\n", resultado);

    return 0;
}