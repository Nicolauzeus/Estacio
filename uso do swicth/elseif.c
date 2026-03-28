#include <stdio.h>

int main() {
    int diaSemana;
    printf("Digite um valor de 1-7 para o dia da semana: ");
    scanf("%d", &diaSemana);

    if (diaSemana == 1) {
        printf("Domingo\n");
    } else if (diaSemana == 2) {
        printf("Segunda-feira\n");
    } else if (diaSemana == 3) {
        printf("Terça-feira\n");
    } else if (diaSemana == 4) {
        printf("Quarta-feira\n");
    } else if (diaSemana == 5) {
        printf("Quinta-feira\n");
    } else if (diaSemana == 6) {
        printf("Sexta-feira\n");
    } else if (diaSemana == 7) {
        printf("Sábado\n");
    } else {
        printf("Dia inválido!\n");
    }
    return 0;
}