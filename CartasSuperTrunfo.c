#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste leonardo silva

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Definindo as variáveis.

    char carta1, carta2, estado1, estado2;
    char codigo1[20], codigo2[20], nomedaCidade1[100], nomedaCidade2[100];
    int populacao1, populacao2, numeroPontosTuristicos1, numeroPontosTuristicos2;
    float area1, area2, pib1, pib2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Solicitando que o usuário entre com as onformaçoes da primeira carta.

    printf("Digite a primeira carta: ");
    scanf(" %c", &carta1);

    printf("Digite o estado da primeira carta (A até H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da primeira carta: ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade da primeira carta: ");
    scanf(" %[^"]", nomedaCidade1);

    printf("Digite a população da primeira carta: ");
    scanf(" %d", &populacao1);

    printf("Digite a área da primeira carta: ");
    scanf(" %f", &area1);

    printf("Digite o PIB da primeira carta: ");
    scanf(" %f", &pib1);
    
    printf("Digite o número de pontos turísticos da primeira carta: ");
    scanf(" %d", &numeroPontosTuristicos1);

    // Solicitando que o usuário entre com as onformaçoes da segunda carta.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
