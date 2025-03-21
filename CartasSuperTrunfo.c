#include <stdio.h>
 
int main() {

    char estado1, estado2;

    char codigo1[20], nomeCidade1[100];

    int populacao1, numPontosTuristicos1;

    float area1, pib1;

    char codigo2[20], nomeCidade2[100];

    int populacao2, numPontosTuristicos2;

    float area2, pib2;
 
    // Exibir apenas o texto "Carta 1:"

    printf("Carta 1:\n");

    printf("Digite o estado (A até H): ");

    scanf(" %c", &estado1);

    getchar(); // Limpar buffer do teclado

    printf("Digite o código: ");

    scanf(" %s", codigo1);

    getchar(); // Limpar buffer do teclado

    printf("Digite o nome da cidade: ");

    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);

    printf("Digite a população: ");

    scanf(" %d", &populacao1);

    printf("Digite a área: ");

    scanf(" %f", &area1);

    printf("Digite o PIB: ");

    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos: ");

    scanf(" %d", &numPontosTuristicos1);

    getchar(); // Limpar buffer do teclado

    // Exibir apenas o texto "Carta 2:"

    printf("\nCarta 2:\n");

    printf("Digite o estado (A até H): ");

    scanf(" %c", &estado2);

    getchar(); // Limpar buffer do teclado

    printf("Digite o código: ");

    scanf(" %s", codigo2);

    getchar(); // Limpar buffer do teclado

    printf("Digite o nome da cidade: ");

    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);

    printf("Digite a população: ");

    scanf(" %d", &populacao2);

    printf("Digite a área: ");

    scanf(" %f", &area2);

    printf("Digite o PIB: ");

    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos: ");

    scanf(" %d", &numPontosTuristicos2);

    // Exibindo os dados coletados

    printf("\n=== Informações Coletadas ===\n");

    printf("Carta 1:\n");

    printf("Estado: %c\n", estado1);

    printf("Código: %s\n", codigo1);

    printf("Nome da Cidade: %s", nomeCidade1);

    printf("População: %d\n", populacao1);

    printf("Área: %.2f km²\n", area1);

    printf("PIB: %.2f\n", pib1);

    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos1);

    printf("\nCarta 2:\n");

    printf("Estado: %c\n", estado2);

    printf("Código: %s\n", codigo2);

    printf("Nome da Cidade: %s", nomeCidade2);

    printf("População: %d\n", populacao2);

    printf("Área: %.2f km²\n", area2);

    printf("PIB: %.2f\n", pib2);

    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos2);
 
    return 0;

}

 