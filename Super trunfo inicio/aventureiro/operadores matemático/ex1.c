#include <stdio.h>

// Programa que realiza as 4 operações aritméticas: soma, subtração, multiplicação e divisão

int main() {

    int numero1, numero2;
    int soma, subtracao, multiplicacao;
    float divisao;

    printf("Digite o primeiro número:\n");
    scanf("%d", &numero1);

    printf("Digite o segundo número:\n");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;

    printf("Segundo os meus cálculos, conclui que:\n");
    printf("Resultado da soma é: %d\n", soma);
    printf("Resultado da subtração é: %d\n", subtracao);
    printf("Resultado da multiplicação é: %d\n", multiplicacao);

    if (numero2 != 0) {
        divisao = (float) numero1 / numero2;
        printf("Resultado da divisão é: %.2f\n", divisao);
    } else {
        printf("Não é possível dividir por zero.\n");
    }

    return 0;
}