#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char codigo_estado, codigo_cidade, pais, estado, cidade;
    int populacao, ponto_turistico;
    float area, pib;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    scanf ("Digite o nome do estado: ", estado);
    scanf ("Digite o código do estado: ", codigo_estado);
    scanf ("Digite o nome da cidade: ", cidade);
    scanf ("Digite o código da cidade: ", codigo_cidade);
    scanf ("Digite o nome do país: ", pais);
    scanf ("Digite o número de habitantes da cidade: ", populacao);
    scanf ("Digite o PIB da cidade: ", pib);
    scanf ("Digite a área da cidade: ", area);
    scanf ("Digite o número de pontos turísticos da cidade: ", ponto_turistico);

    printf ("Código: \n País: \n Estado: \n Cidade: \n População: \n PIB: \n Área: \n Número de pontos turísticos: ");

    return 0;
}
