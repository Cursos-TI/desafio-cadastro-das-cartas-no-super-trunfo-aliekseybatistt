#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char codigo[50], estado, cidade[50];
    int populacao, ponto_turistico;
    float area, pib;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Digite o nome do estado: ");
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
    scanf("%d", &ponto_turistico);

    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d habitantes\nPIB: %f bilhões de reais\nÁrea: %f km²\nNúmero de pontos turísticos: %d" , estado, codigo, cidade, populacao, pib, area, ponto_turistico);

    return 0;
}