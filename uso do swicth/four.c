#include <stdio.h>

int main() {
    int sabedoria, providencia, atitude, paciencia;

    printf("Escolha 1 para SIM e 0 para NAO:\n\n");

    printf("Voce tem sabedoria? ");
    scanf("%d", &sabedoria);

    printf("Voce tem providencia? ");
    scanf("%d", &providencia);

    printf("Voce tem atitude? ");
    scanf("%d", &atitude);

    printf("Voce tem paciencia? ");
    scanf("%d", &paciencia);

    printf("\n--- Resultado ---\n");

    // Caso: tem todas
    if (sabedoria && providencia && atitude && paciencia) {
        printf("Voce domina suas decisoes. Sucesso consistente e inevitavel.\n");
    }

    // Caso: nao tem nenhuma
    else if (!sabedoria && !providencia && !atitude && !paciencia) {
        printf("Sem direcao, sem acao. A chance de fracasso e muito alta.\n");
    }

    // Casos individuais
    else {
        if (sabedoria)
            printf("Sabedoria: Voce entende o caminho certo.\n");
        else
            printf("Falta sabedoria: Pode tomar decisoes erradas.\n");

        if (providencia)
            printf("Providencia: Voce se antecipa aos problemas.\n");
        else
            printf("Falta providencia: Pode ser pego desprevenido.\n");

        if (atitude)
            printf("Atitude: Voce age e faz acontecer.\n");
        else
            printf("Falta atitude: Ideias ficam so no papel.\n");

        if (paciencia)
            printf("Paciencia: Voce respeita o tempo das coisas.\n");
        else
            printf("Falta paciencia: Pode desistir cedo demais.\n");
    }

    return 0;
}