#include <stdio.h>

int main() {
    // Variáveis da Carta 1 (estado1 alterado para array de char)
    char estado1[3], cidade1[50], codigo1[50];
    unsigned long int populacao1;
    int turismo1;
    float area1, pib1;
    float densidade1, pibpercapita1, superPoder1;

    // Variáveis da Carta 2 (estado2 alterado para array de char)
    char estado2[3], cidade2[50], codigo2[50];
    unsigned long int populacao2;
    int turismo2;
    float area2, pib2;
    float densidade2, pibpercapita2, superPoder2;

    // Bloco de leitura carta 1
    printf("==== CARTA 1 ====\n");
    printf("Qual o estado?: ");
    scanf(" %2s", estado1); // %2s para ler a sigla do estado

    printf("Qual a cidade?: ");
    scanf(" %s", cidade1);

    printf("Qual a população?: ");
    scanf(" %lu", &populacao1); // %lu para unsigned long int

    printf("Tem quantos pontos turísticos?: ");
    scanf(" %d", &turismo1);

    printf("Qual o PIB?: ");
    scanf(" %f", &pib1);

    printf("Qual a área?: ");
    scanf(" %f", &area1);

    printf("Qual o código: ");
    scanf(" %s", codigo1);


    // Bloco de leitura carta 2
    printf("\n==== CARTA 2 ====\n");
    printf("Qual o estado?: ");
    scanf(" %2s", estado2);

    printf("Qual a cidade?: ");
    scanf(" %s", cidade2);

    printf("Qual a população?: ");
    scanf(" %lu", &populacao2); // %lu para unsigned long int

    printf("Tem quantos pontos turísticos?: ");
    scanf(" %d", &turismo2);

    printf("Qual o PIB?: ");
    scanf(" %f", &pib2);

    printf("Qual a área?: ");
    scanf(" %f", &area2);

    printf("Qual o código: ");
    scanf(" %s", codigo2);

    // Cálculos de Densidade Populacional e PIB per Capita
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    pibpercapita1 = (pib1 * 1000000000.0f) / (float)populacao1;
    pibpercapita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    // COMPARAÇÃO DE CARTAS (Atributo: População)
    printf("\n========================================\n");
    printf("Comparação de cartas (Atributo: População)\n");
    printf("========================================\n\n");
    
    // Corrigido %d para %lu na população
    printf("Carta 1 - %s (%s): %lu habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu habitantes\n", cidade2, estado2, populacao2);

    // Estrutura condicional para determinar a carta vencedora
    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } 
    else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } 
    else {
        printf("\nResultado: Empate! Ambas as cartas possuem a mesma população.\n");
    }

    return 0;
}