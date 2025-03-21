
#include <stdio.h>

int main() {

    char carta1, carta2, estado1, estado2;

    char codigo1[20], codigo2[20], nomeCidade1[100], nomeCidade2[100];

    int populacao1, populacao2, numPontosTuristicos1, numPontosTuristicos2;

    float area1, area2, pib1, pib2;
 
    // Solicitando entrada dos dados para a primeira carta

    printf("Digite a primeira carta: ");

    scanf(" %c", &carta1);

    printf("Digite o estado da primeira carta (A até H): ");

    scanf(" %c", &estado1);

    printf("Digite o código da primeira carta: ");

    scanf(" %s", codigo1);

    printf("Digite o nome da cidade da primeira carta: ");

    getchar(); // Limpar buffer do teclado

    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);

    printf("Digite a população da primeira carta: ");

    scanf(" %d", &populacao1);

    printf("Digite a área da primeira carta: ");

    scanf(" %f", &area1);

    printf("Digite o PIB da primeira carta: ");

    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos da primeira carta: ");

    scanf(" %d", &numPontosTuristicos1);
 
    // Solicitando entrada dos dados para a segunda carta

    printf("\nDigite a segunda carta: ");

    scanf(" %c", &carta2);

    printf("Digite o estado da segunda carta (A até H): ");

    scanf(" %c", &estado2);

    printf("Digite o código da segunda carta: ");

    scanf(" %s", codigo2);

    printf("Digite o nome da cidade da segunda carta: ");

    getchar(); // Limpar buffer do teclado

    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);

    printf("Digite a população da segunda carta: ");

    scanf(" %d", &populacao2);

    printf("Digite a área da segunda carta: ");

    scanf(" %f", &area2);

    printf("Digite o PIB da segunda carta: ");

    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos da segunda carta: ");

    scanf(" %d", &numPontosTuristicos2);

    // Exibindo os dados coletados

    printf("\n=== Informações Coletadas ===\n");

    printf("\n--- Primeira Carta ---\n");

    printf("Carta: %c\n", carta1);

    printf("Estado: %c\n", estado1);

    printf("Código: %s\n", codigo1);

    printf("Nome da Cidade: %s\n", nomeCidade1);

    printf("População: %d\n", populacao1);

    printf("Área: %.2f km²\n", area1);

    printf("PIB: %.2f\n", pib1);

    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos1);

    printf("\n--- Segunda Carta ---\n");

    printf("Carta: %c\n", carta2);

    printf("Estado: %c\n", estado2);

    printf("Código: %s\n", codigo2);

    printf("Nome da Cidade: %s\n", nomeCidade2);

    printf("População: %d\n", populacao2);

    printf("Área: %.2f km²\n", area2);

    printf("PIB: %.2f\n", pib2);

    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos2);
 
    return 0;

}