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

    // Calculando a densidade demográfica para ambas as cartas
    float densidadeDemografica1 = (float)populacao1 / area1;
    float densidadeDemografica2 = (float)populacao2 / area2;

    printf("\nDensidade Demográfica:\n");
    printf("Carta 1: %.2f hab/km²\n", densidadeDemografica1);
    printf("Carta 2: %.2f hab/km²\n", densidadeDemografica2);

    // Menu interativo para escolha do atributo de comparação
    int opcao;
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("Escolha o atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite sua opção (1-5): ");
    scanf("%d", &opcao);

    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");

    // Estrutura switch para processar a escolha do usuário
    switch(opcao) {
        case 1: // Comparação por População
            printf("Atributo escolhido: População\n");
            printf("Carta 1 (%s): %d habitantes\n", nomeCidade1, populacao1);
            printf("Carta 2 (%s): %d habitantes\n", nomeCidade2, populacao2);
            
            if(populacao1 > populacao2) {
                printf("🏆 VENCEDOR: Carta 1 (%s) com %d habitantes!\n", nomeCidade1, populacao1);
            } else if(populacao2 > populacao1) {
                printf("🏆 VENCEDOR: Carta 2 (%s) com %d habitantes!\n", nomeCidade2, populacao2);
            } else {
                printf("🤝 EMPATE! Ambas as cartas têm %d habitantes.\n", populacao1);
            }
            break;

        case 2: // Comparação por Área
            printf("Atributo escolhido: Área\n");
            printf("Carta 1 (%s): %.2f km²\n", nomeCidade1, area1);
            printf("Carta 2 (%s): %.2f km²\n", nomeCidade2, area2);
            
            if(area1 > area2) {
                printf("🏆 VENCEDOR: Carta 1 (%s) com %.2f km²!\n", nomeCidade1, area1);
            } else if(area2 > area1) {
                printf("🏆 VENCEDOR: Carta 2 (%s) com %.2f km²!\n", nomeCidade2, area2);
            } else {
                printf("🤝 EMPATE! Ambas as cartas têm %.2f km².\n", area1);
            }
            break;

        case 3: // Comparação por PIB
            printf("Atributo escolhido: PIB\n");
            printf("Carta 1 (%s): %.2f\n", nomeCidade1, pib1);
            printf("Carta 2 (%s): %.2f\n", nomeCidade2, pib2);
            
            if(pib1 > pib2) {
                printf("🏆 VENCEDOR: Carta 1 (%s) com PIB de %.2f!\n", nomeCidade1, pib1);
            } else if(pib2 > pib1) {
                printf("🏆 VENCEDOR: Carta 2 (%s) com PIB de %.2f!\n", nomeCidade2, pib2);
            } else {
                printf("🤝 EMPATE! Ambas as cartas têm PIB de %.2f.\n", pib1);
            }
            break;

        case 4: // Comparação por Pontos Turísticos
            printf("Atributo escolhido: Número de Pontos Turísticos\n");
            printf("Carta 1 (%s): %d pontos turísticos\n", nomeCidade1, numPontosTuristicos1);
            printf("Carta 2 (%s): %d pontos turísticos\n", nomeCidade2, numPontosTuristicos2);
            
            if(numPontosTuristicos1 > numPontosTuristicos2) {
                printf("🏆 VENCEDOR: Carta 1 (%s) com %d pontos turísticos!\n", nomeCidade1, numPontosTuristicos1);
            } else if(numPontosTuristicos2 > numPontosTuristicos1) {
                printf("🏆 VENCEDOR: Carta 2 (%s) com %d pontos turísticos!\n", nomeCidade2, numPontosTuristicos2);
            } else {
                printf("🤝 EMPATE! Ambas as cartas têm %d pontos turísticos.\n", numPontosTuristicos1);
            }
            break;

        case 5: // Comparação por Densidade Demográfica (regra invertida)
            printf("Atributo escolhido: Densidade Demográfica\n");
            printf("Carta 1 (%s): %.2f hab/km²\n", nomeCidade1, densidadeDemografica1);
            printf("Carta 2 (%s): %.2f hab/km²\n", nomeCidade2, densidadeDemografica2);
            printf("⚠️  ATENÇÃO: Para densidade demográfica, vence o MENOR valor!\n");
            
            // Estrutura de decisão aninhada para densidade demográfica
            if(densidadeDemografica1 < densidadeDemografica2) {
                // Carta 1 tem menor densidade (vence)
                if(densidadeDemografica1 < 100.0) {
                    printf("🏆 VENCEDOR: Carta 1 (%s) com densidade baixa de %.2f hab/km²!\n", 
                           nomeCidade1, densidadeDemografica1);
                    printf("💡 Densidade considerada baixa (menos de 100 hab/km²).\n");
                } else if(densidadeDemografica1 < 500.0) {
                    printf("🏆 VENCEDOR: Carta 1 (%s) com densidade média de %.2f hab/km²!\n", 
                           nomeCidade1, densidadeDemografica1);
                    printf("💡 Densidade considerada média (100-500 hab/km²).\n");
                } else {
                    printf("🏆 VENCEDOR: Carta 1 (%s) com densidade alta de %.2f hab/km²!\n", 
                           nomeCidade1, densidadeDemografica1);
                    printf("💡 Densidade considerada alta (mais de 500 hab/km²).\n");
                }
            } else if(densidadeDemografica2 < densidadeDemografica1) {
                // Carta 2 tem menor densidade (vence)
                if(densidadeDemografica2 < 100.0) {
                    printf("🏆 VENCEDOR: Carta 2 (%s) com densidade baixa de %.2f hab/km²!\n", 
                           nomeCidade2, densidadeDemografica2);
                    printf("💡 Densidade considerada baixa (menos de 100 hab/km²).\n");
                } else if(densidadeDemografica2 < 500.0) {
                    printf("🏆 VENCEDOR: Carta 2 (%s) com densidade média de %.2f hab/km²!\n", 
                           nomeCidade2, densidadeDemografica2);
                    printf("💡 Densidade considerada média (100-500 hab/km²).\n");
                } else {
                    printf("🏆 VENCEDOR: Carta 2 (%s) com densidade alta de %.2f hab/km²!\n", 
                           nomeCidade2, densidadeDemografica2);
                    printf("💡 Densidade considerada alta (mais de 500 hab/km²).\n");
                }
            } else {
                printf("🤝 EMPATE! Ambas as cartas têm densidade de %.2f hab/km².\n", densidadeDemografica1);
            }
            break;

        default: // Tratamento de entrada inválida
            printf("❌ ERRO: Opção inválida! Por favor, escolha uma opção entre 1 e 5.\n");
            printf("🔄 Execute o programa novamente e selecione uma opção válida.\n");
            break;
    }

    printf("\n=== FIM DO JOGO ===\n");
    printf("Obrigado por jogar Super Trunfo!\n");
 
    return 0;

}
