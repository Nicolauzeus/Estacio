#include <stdio.h>
#include <time.h>
int main (){
int opcao;
do {
    printf ("####Menu do Jokenpo### \n");
    printf ("1. Pedra \n");
    printf ("2. Papel \n");
    printf ("3. Tesoura \n");
    printf ("Escolha uma das opções acima: \n");
    scanf (" %d", &opcao);
    getchar();
    
    if (opcao < 1 || opcao > 3) {
        printf("Escolha um número válido entre 1 e 3 \n");
    }    
    
} while(opcao < 1 || opcao > 3);
    switch (opcao){
    case 1:
    printf ("Você escolheu pedra");
    break;
    case 2:
    printf ("Você escolheu papel");
    break;
    case 3:
    printf ("Você escolheu tesoura");
    break;
    /*default:
    printf ("Escolha um número válido, entre 1-3");
    break;*/
    }   

    return 0;
}