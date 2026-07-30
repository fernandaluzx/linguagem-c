#include <stdio.h>

int main() {
    //Carta 1 - Brasil
    char pais1[] = "Brasil";
    unsigned long int populacao1 = 214000000;
    float area1 = 8515767.0;
    float pib1 = 1.608; // Em trilhões de USD
    int pontos_turisticos1 = 50;
    float densidade1 = (float)populacao1 / area1;

    //Carta 2 - Japão
    char pais2[] = "Japão";
    unsigned long int populacao2 = 125000000;
    float area2 = 377975.0;
    float pib2 = 4.230; // Em trilhões de USD
    int pontos_turisticos2 = 80;
    float densidade2 = (float)populacao2 / area2;

    int opcao;

    printf("========================================\n");
    printf("     SUPER TRUNFO - COMPARAR CARTAS     \n");
    printf("========================================\n");
    printf("Carta 1: %s\n", pais1);
    printf("Carta 2: %s\n", pais2);
    printf("----------------------------------------\n");
    printf("Escolha o atributo para a comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("========================================\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n----------------------------------------\n");

    switch (opcao) {
        case 1: //População
            printf("Atributo Escolhido: POPULAÇÃO\n");
            printf("%s: %lu habitantes\n", pais1, populacao1);
            printf("%s: %lu habitantes\n", pais2, populacao2);
            printf("----------------------------------------\n");

            if (populacao1 > populacao2) {
                printf("Resultado: Vencedor foi %s!\n", pais1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Vencedor foi %s!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: //Área
            printf("Atributo Escolhido: ÁREA (km²)\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);
            printf("----------------------------------------\n");

            if (area1 > area2) {
                printf("Resultado: Vencedor foi %s!\n", pais1);
            } else if (area2 > area1) {
                printf("Resultado: Vencedor foi %s!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: //PIB
            printf("Atributo Escolhido: PIB (Trilhões de USD)\n");
            printf("%s: $%.3f trilhões\n", pais1, pib1);
            printf("%s: $%.3f trilhões\n", pais2, pib2);
            printf("----------------------------------------\n");

            if (pib1 > pib2) {
                printf("Resultado: Vencedor foi %s!\n", pais1);
            } else if (pib2 > pib1) {
                printf("Resultado: Vencedor foi %s!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: //Pontos Turísticos
            printf("Atributo Escolhido: PONTOS TURÍSTICOS\n");
            printf("%s: %d pontos\n", pais1, pontos_turisticos1);
            printf("%s: %d pontos\n", pais2, pontos_turisticos2);
            printf("----------------------------------------\n");

            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Resultado: Vencedor foi %s!\n", pais1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("Resultado: Vencedor foi %s!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: //Densidade Demográfica (REGRA INVERTIDA)
            printf("Atributo Escolhido: DENSIDADE DEMOGRÁFICA\n");
            printf("(Regra: O MENOR valor vence!)\n");
            printf("%s: %.2f hab/km²\n", pais1, densidade1);
            printf("%s: %.2f hab/km²\n", pais2, densidade2);
            printf("----------------------------------------\n");

            //Atenção: Vence quem tem MENOR densidade (operador '<')
            if (densidade1 < densidade2) {
                printf("Resultado: Vencedor foi %s!\n", pais1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: Vencedor foi %s!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção Inválida! Digite um número de 1 a 5.\n");
            break;
    }

    printf("========================================\n");

    return 0;
}