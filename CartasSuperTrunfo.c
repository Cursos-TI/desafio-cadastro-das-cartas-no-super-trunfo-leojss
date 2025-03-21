#include <stdio.h>
 
//Declaração de todas as variáveis
 
int main() {

    char estado1, estado2;

    char codigo1[20], nomeCidade1[100];

    int populacao1, numPontosTuristicos1;

    float area1, pib1;

    char codigo2[20], nomeCidade2[100];

    int populacao2, numPontosTuristicos2;

    float area2, pib2;
 
    // Exibi o label "Carta 1:"

    printf("Carta 1:\n");
 
    //Solicita e lê a entrada do código do Estado da primeira carta

    printf("Digite o estado (A até H): ");

    scanf(" %c", &estado1);

    getchar(); // Limpar buffer do teclado
 
    //Solicita e lê a entrada do código da primeira carta

    printf("Digite o código da Carta: ");

    scanf(" %s", codigo1);

    getchar(); // Limpar buffer do teclado
 
    //Solicita e lê a entrada da Cidade da primeira carta

    printf("Digite o nome da cidade: ");

    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
 
    //Solicita e lê a entrada da população da primeira carta

    printf("Digite a população: ");

    scanf(" %d", &populacao1);
 
    //Solicita e lê a entrada da área total da primeira carta

    printf("Digite a área: ");

    scanf(" %f", &area1);
 
    //Solicita e lê a entrada do PIB da primeira carta

    printf("Digite o PIB: ");

    scanf(" %f", &pib1);
 
    //Solicita e lê o número de pontos turísticos da primeira carta

    printf("Digite o número de pontos turísticos: ");

    scanf(" %d", &numPontosTuristicos1);

    getchar(); // Limpar buffer do teclado

    // Exibi o label "Carta 2:"

    printf("\nCarta 2:\n");
 
    //Solicita e lê a entrada do código do Estado da segunda carta

    printf("Digite o estado (A até H): ");

    scanf(" %c", &estado2);

    getchar(); // Limpar buffer do teclado
 
    //Solicita e lê a entrada do código da segunda carta

    printf("Digite o código: ");

    scanf(" %s", codigo2);

    getchar(); // Limpar buffer do teclado
 
    //Solicita e lê a entrada da Cidade da segunda carta

    printf("Digite o nome da cidade: ");

    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
 
    //Solicita e lê a entrada da população da segunda carta

    printf("Digite a população: ");

    scanf(" %d", &populacao2);
 
    //Solicita e lê a entrada da área total da primeira carta

    printf("Digite a área: ");

    scanf(" %f", &area2);
 
    //Solicita e lê a entrada do PIB da segunda carta

    printf("Digite o PIB: ");

    scanf(" %f", &pib2);
 
    //Solicita e lê o número de pontos turísticos da segunda carta

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

 