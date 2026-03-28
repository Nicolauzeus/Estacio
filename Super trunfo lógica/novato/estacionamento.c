//SISTEMA DE ESTACIONAMENTO

#include <string.h>
#include <stdlib.h>
#include <stdio.h>


int main() {
    int tipoVeiculo, horas, horarioEntrada;
    char vip;
    float valorHora, valorBruto, desconto = 0, valorFinal;
    float taxaAdicional = 0;
    float descontoTempo = 0, descontoVip = 0;
    
    printf("=== SISTEMA DE ESTACIONAMENTO ===\n\n");
    
    printf("Tipo do veiculo:\n");
    printf("1 - Carro (R$5,00/h)\n");
    printf("2 - Moto (R$3,00/h)\n");
    printf("3 - Caminhao (R$8,00/h)\n");
    printf("Escolha: ");
    scanf("%d", &tipoVeiculo);
    
    // Definindo valor por hora baseado no tipo de veículo (sem switch)
    if (tipoVeiculo == 1) {
        valorHora = 5.00;
        printf("\nVeiculo: Carro\n");
    } else if (tipoVeiculo == 2) {
        valorHora = 3.00;
        printf("\nVeiculo: Moto\n");
    } else if (tipoVeiculo == 3) {
        valorHora = 8.00;
        printf("\nVeiculo: Caminhao\n");
    } else {
        printf("Tipo de veiculo invalido!\n");
        return 1;
    }
    
    printf("Horas estacionadas: ");
    scanf("%d", &horas);
    
    // Validação de horas
    if (horas <= 0) {
        printf("Horas invalidas!\n");
        return 1;
    }
    
    if (horas > 24) {
        printf("Limite maximo de 24 horas excedido!\n");
        return 1;
    }
    
    printf("Cliente VIP? (S/N): ");
    scanf(" %c", &vip);
    
    printf("Horario de entrada (0-23): ");
    scanf("%d", &horarioEntrada);
    
    // Validação de horário
    if (horarioEntrada < 0 || horarioEntrada > 23) {
        printf("Horario invalido!\n");
        return 1;
    }
    
    // Cálculo do valor bruto
    valorBruto = horas * valorHora;
    
    // Aplicando descontos por tempo estacionado
    if (horas > 8) {
        descontoTempo = valorBruto * 0.20;  // 20% de desconto
        printf("\n--- DESCONTOS APLICADOS ---\n");
        printf("Desconto por tempo (20%% por mais de 8h): R$ %.2f\n", descontoTempo);
    } else if (horas > 4) {
        descontoTempo = valorBruto * 0.10;  // 10% de desconto
        printf("\n--- DESCONTOS APLICADOS ---\n");
        printf("Desconto por tempo (10%% por mais de 4h): R$ %.2f\n", descontoTempo);
    } else {
        printf("\n--- DESCONTOS APLICADOS ---\n");
        printf("Desconto por tempo: R$ 0,00\n");
    }
    
    // Aplicando desconto VIP
    if (vip == 'S' || vip == 's') {
        descontoVip = (valorBruto - descontoTempo) * 0.05;  // 5% sobre o valor com desconto de tempo
        printf("Desconto VIP (5%%): R$ %.2f\n", descontoVip);
    } else if (vip == 'N' || vip == 'n') {
        printf("Desconto VIP: R$ 0,00\n");
    } else {
        printf("Opcao VIP invalida! Considerando como nao VIP.\n");
    }
    
    // Total de descontos
    desconto = descontoTempo + descontoVip;
    
    // Aplicando taxas adicionais para caminhão em horário comercial
    if (tipoVeiculo == 3 && horarioEntrada >= 8 && horarioEntrada <= 18) {
        taxaAdicional = 10.00;
        printf("\n--- TAXAS ADICIONAIS ---\n");
        printf("Taxa de horario comercial (caminhao): R$ %.2f\n", taxaAdicional);
    } else if (tipoVeiculo == 3) {
        printf("\n--- TAXAS ADICIONAIS ---\n");
        printf("Taxa de horario comercial: R$ 0,00 (fora do horario comercial)\n");
    } else {
        printf("\n--- TAXAS ADICIONAIS ---\n");
        printf("Taxa de horario comercial: R$ 0,00 (apenas para caminhoes)\n");
    }
    
    // Cálculo do valor final
    valorFinal = valorBruto - desconto + taxaAdicional;
    
    // Exibindo resultado final
    printf("\n=== RESUMO DO PAGAMENTO ===\n");
    printf("Tipo: ");
    if (tipoVeiculo == 1) {
        printf("Carro\n");
    } else if (tipoVeiculo == 2) {
        printf("Moto\n");
    } else {
        printf("Caminhao\n");
    }
    
    printf("Horas estacionadas: %dh\n", horas);
    printf("Valor por hora: R$ %.2f\n", valorHora);
    printf("Valor bruto: R$ %.2f\n", valorBruto);
    printf("Total de descontos: R$ %.2f\n", desconto);
    printf("Taxas adicionais: R$ %.2f\n", taxaAdicional);
    printf("Valor final a pagar: R$ %.2f\n", valorFinal);
    
    // Bônus: exibindo horário de saída
    int horarioSaida = (horarioEntrada + horas) % 24;
    printf("\nHorario de entrada: %d:00\n", horarioEntrada);
    printf("Horario de saida: %d:00\n", horarioSaida);
    
    return 0;
}

