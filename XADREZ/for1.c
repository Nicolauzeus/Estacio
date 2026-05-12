#include <stdio.h>

int main() {
    int numero, i;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (i = 0; i <= numero; i++) 
    {
        printf("%d ", i);
    }


    return 0;
}