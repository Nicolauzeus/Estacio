#include <stdio.h>

// Estrutura de decisão composta com múltiplas condições
// verificação de segurança de um armazém

int main() {
  float temperatura, humidade;
  unsigned int estoque;

    printf("Verificação de segurança do armazém\n");

    printf("Digite a temperatura do armazém (em °C): ");
    scanf("%f", &temperatura);

    printf("Digite a umidade do armazém (em %): ");
    scanf("%f", &humidade);

    printf("Digite o estoque do armazém: ");
    scanf("%u", &estoque);


    if (temperatura > 30.0 ) {
        printf("Alerta: Temperatura alta! Risco de deterioração dos produtos.\n");
    } else if (temperatura < 0.0) {
        printf("Alerta: Temperatura baixa! Risco de congelamento dos produtos.\n");
    } else {
        printf("Temperatura dentro do limite seguro.\n");
    }

    if (humidade > 70.0) {
        printf("Alerta: Umidade alta! Risco de moldagem dos produtos.\n");
    } else if (humidade < 20.0) {
        printf("Alerta: Umidade baixa! Risco de ressecamento dos produtos.\n");
    } else {
        printf("Umidade dentro do limite seguro.\n");
    }

    if (estoque > 1000) {
        printf("Alerta: Estoque excessivo! Risco de superlotação e danos aos produtos.\n");
    } else if (estoque < 100) {
        printf("Alerta: Estoque baixo! Risco de falta de produtos para atender a demanda.\n");
    } else {
        printf("Estoque dentro do limite seguro.\n");
    }
        
  return 0;
}