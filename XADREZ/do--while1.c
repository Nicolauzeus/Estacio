#include <stdio.h>
int main() {
    int numero;


    do {
            printf("Digite um número múltiplo de 3 para sair do código: ");
            scanf("%d", &numero);


        if (numero % 3 == 0) {
            printf("o número %d é múltiplo de 3 \n", numero);
        } else {
            printf("o número %d não é múltiplo de 3, tente um número múltiplo de 3 \n", numero);
        }
        
    } while (numero % 3 !=  0);
    return 0;
}