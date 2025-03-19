#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado1, estado2, codigo1, codigo2, cidade1, cidade2;
    int populacao1, populacao2, ponto_turistico1, ponto_turistico2;
    float area1, area2, pib1, pib2, dens_pop1, dens_pop2, pib_per1, pib_per2;

    estado1 ="A";
    codigo1 = "A01";
    cidade1 = "Recife";
    populacao1 = 1488920;
    ponto_turistico1 = 30;
    area1 = 218.435;
    pib1 = 54.97;
    dens_pop1 = (float) populacao1 / area1;
    pib_per1 = (float) pib1 / populacao1;

    estado1 ="A";
    codigo2 = "A02";
    cidade2 = "Olinda";
    populacao2 = 349976;
    ponto_turistico2 = 19;
    area2 = 43.3;
    pib2 = 5.53;
    dens_pop2 = (float) populacao2 / area2;
    pib_per2 = (float) pib2 / populacao2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    /*printf("Digite o nome do estado: ");
    scanf("%c", &estado);
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade);
    printf("Digite o código da cidade: ");
    scanf("%s", &codigo);
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);
    printf("Digite a área da cidade: ");
    scanf("%f", &area);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &ponto_turistico);*/

    printf("Carta 1 \nEstado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d habitantes\nPIB: %f bilhões de reais\nÁrea: %f km²\nNúmero de pontos turísticos: %d \nDensidade populacional: %.2f hab/km² \nPIB per capita: %.2f reais/hab" , estado1, codigo1, cidade1, populacao1, pib1, area1, ponto_turistico1, dens_pop1, pib_per1);

    printf("Carta 2 \n Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d habitantes\nPIB: %f bilhões de reais\nÁrea: %f km²\nNúmero de pontos turísticos: %d \nDensidade populacional: %.2f hab/km²\nPIB per capita: %.2f reais/hab" , estado2, codigo2, cidade2, populacao2, pib2, area2, ponto_turistico2, dens_pop2, pib_per2);

    return 0;
}