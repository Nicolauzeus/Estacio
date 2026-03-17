//Pedir ao aluno para escrever  dois valores, somar ela e depois encontrar
//a média entre os dois valores

#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    float soma, media;

    printf("Este programa calcula a soma e a média das três notas.\n");
    printf("Digite a primeira nota:\n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota:\n");
    scanf("%f", &nota2);

    printf("Digite a terceira nota:\n");
    scanf("%f", &nota3);

    soma = nota1 + nota2 + nota3;
    media = soma / 3;

    printf("A soma das notas é: %.2f\n", soma);
    printf("A média das notas é: %.2f\n", media);

    return 0;
}