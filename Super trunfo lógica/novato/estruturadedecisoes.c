#include <stdio.h>

/* Estruturas de decisão encadeada
Elas permitem tomar decisões mais complexas, onde uma decisão depende do resultado de outra.
No contexto do jogo de cartas, você pode usar estruturas de decisão encadeada para comparar
múltiplos atributos de uma carta e determinar o vencedor com base em uma hierarquia de critérios.  Por exemplo, você pode primeiro comparar a população, e se houver um empate, comparar a área, 
e assim por diante.
vamos verifiicar se uma pessoa é idosoa, adulta, adolescente ou criança*/

int main() {
    int idade;


    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 60) {
        printf("Você é idoso.\n");
    } else if (idade < 60 && idade >= 18) {
        printf("Você é adulto.\n");
    } else if (idade < 18 && idade >= 12) {
        printf("Você é adolescente.\n");
    } else {
        printf("Você é criança.\n");

        
    }

    return 0;
}