#include <stdio.h>
 
int main() {
    char estado1;
    char codigo[20], nomeCidade[100];
    int populacao, numPontosTuristicos;
    float area, pib;
 
    // Exibir apenas o texto "Carta 1:"
    printf("Carta 1:\n");
    printf("Digite o estado (A até H): ");
    scanf(" %c", &estado1);
    getchar(); // Limpar buffer do teclado
    printf("Digite o código: ");
    scanf(" %s", codigo);
    getchar(); // Limpar buffer do teclado
    printf("Digite o nome da cidade: ");
    fgets(nomeCidade, sizeof(nomeCidade), stdin);
    printf("Digite a população: ");
    scanf(" %d", &populacao);
    printf("Digite a área: ");
    scanf(" %f", &area);
    printf("Digite o PIB: ");
    scanf(" %f", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &numPontosTuristicos);
    // Exibindo os dados coletados
    printf("\n=== Informações Coletadas ===\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos);
 
    return 0;
}