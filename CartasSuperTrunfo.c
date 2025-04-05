#include <stdio.h>

int main() {
    // Declaração de todas as variáveis
    char estado1, estado2, codigo1[20], nomeCidade1[100], codigo2[20], nomeCidade2[100];
    int populacao1, numPontosTuristicos1, populacao2, numPontosTuristicos2;
    float area1, pib1, area2, pib2;

    // Exibe o label "Carta 1:"
    printf("Carta 1:\n");

    // Solicita e valida o estado da primeira carta
    do {
        printf("Digite o estado (A até H): ");
        scanf(" %c", &estado1);
        getchar(); // Limpar buffer
    } while (estado1 < 'A' || estado1 > 'H');

    printf("Digite o código da Carta: ");
    scanf(" %s", codigo1);
    getchar();

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
    getchar();

    // Carta 2
    printf("\nCarta 2:\n");

    // Solicita e valida o estado da segunda carta
    do {
        printf("Digite o estado (A até H): ");
        scanf(" %c", &estado2);
        getchar();
    } while (estado2 < 'A' || estado2 > 'H');

    printf("Digite o código: ");
    scanf(" %s", codigo2);
    getchar();

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

    // Exibindo os dados coletados das duas cartas
    printf("\n=== Dados das Cartas ===\n");

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
