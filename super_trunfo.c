#include <stdio.h>

int main() {
//Variáveis da Carta 1
char estado1, cidade1[50], codigo1[50];
unsigned long int populacao1;//Atualizado para unsigned long int
int turismo1;
float area1, pib1;
//Incluindo novas variáveis Carta 1
float densidade1, pibpercapita1, superPoder1;

//Variáveis da Carta 2
char estado2, cidade2[50], codigo2[50];
unsigned long int populacao2; //Atualizado para unsigned long int
int turismo2;
float area2, pib2;
//Incluindo novas variáveis Carta 2
float densidade2, pibpercapita2, superPoder2;;

//Variáveis para guardar o resultado das comparações (1 para Carta 1, 0 para Carta 2)
int win_pop, win_area, win_pib, win_turismo, win_densidade, win_pibpercapita, win_superpoder;

//Bloco de leitura carta 1
printf("==== CARTA 1 ====\n");
printf("Qual o estado?: ");
scanf(" %c", &estado1);

printf("Qual a cidade?: ");
scanf(" %s", cidade1);

printf("Qual a população?: ");
scanf(" %d", &populacao1);


printf("Tem quantos pontos turísticos?: ");
scanf(" %d", &turismo1);


printf("Qual o PIB?: ");
scanf(" %f", &pib1);


printf("Qual a área?: ");
scanf("%f", &area1);


printf("Qual o código: ");
scanf("%s", codigo1);


//Bloco de leitura carta 2
printf("==== CARTA 2 ====\n");
printf("Qual o estado?: ");
scanf(" %c", &estado2);


printf("Qual a cidade?: ");
scanf(" %s", cidade2);


printf("Qual a população?: ");
scanf(" %d", &populacao2);


printf("Tem quantos pontos turísticos?: ");
scanf(" %d", &turismo2);


printf("Qual o PIB?: ");
scanf(" %f", &pib2);


printf("Qual a área?: ");
scanf("%f", &area2);


printf("Qual o código: ");
scanf("%s", codigo2);

//Cálculos de Densidade Populacional e PIB per Capita
densidade1 = (float)populacao1 / area1;
densidade2 = (float)populacao2 / area2;
pibpercapita1 = (pib1 * 1000000000.0f) / (float)populacao1;
pibpercapita2 = (pib2 * 1000000000.0f) / (float)populacao2;

//Cálculo do Super Poder (soma de todos os atributos + inverso da densidade)
superPoder1 = (float)populacao1 + area1 + pib1 + (float)turismo1 + pibpercapita1 + (1.0f / densidade1);
superPoder2 = (float)populacao2 + area2 + pib2 + (float)turismo2 + pibpercapita2 + (1.0f / densidade2);
    
//Atributos (1 = Carta 1 venceu, 0 = Carta 2 venceu)
win_pop          = populacao1 > populacao2;
win_area         = area1 > area2;
win_pib          = pib1 > pib2;
win_turismo      = turismo1 > turismo2;
win_densidade    = densidade1 < densidade2; // Menor densidade vence
win_pibpercapita = pibpercapita1 > pibpercapita2;
win_superpoder   = superPoder1 > superPoder2;

//Saída de informações
printf("===== DADOS CARTA 1 =====\n");
printf("Código: %s\n", codigo1);
printf("Estado: %c\n", estado1);
printf("Cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Numero de pontos turisticos: %d\n", turismo1);
printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
printf("PIB per Capita: %.2f reais\n", pibpercapita1);
printf("Super Poder: %.2f\n", superPoder1);

printf("===== DADOS CARTA 2 =====\n");
printf("Código: %s\n", codigo2);
printf("Estado: %c\n", estado2);
printf("Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Numero de pontos turisticos: %d\n", turismo2);
printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
printf("PIB per Capita: %.2f reais\n", pibpercapita2);
printf("Super Poder: %.2f\n", superPoder2);

//Resultado das Comparações
printf("\n===== COMPARAÇÃO DE CARTAS =====\n");
printf("População: Carta %d venceu (%d)\n", 2 - win_pop, win_pop);
printf("Área: Carta %d venceu (%d)\n", 2 - win_area, win_area);
printf("PIB: Carta %d venceu (%d)\n", 2 - win_pib, win_pib);
printf("Pontos Turísticos: Carta %d venceu (%d)\n", 2 - win_turismo, win_turismo);
printf("Densidade Populacional: Carta %d venceu (%d)\n", 2 - win_densidade, win_densidade);
printf("PIB per Capita: Carta %d venceu (%d)\n", 2 - win_pibpercapita, win_pibpercapita);
printf("Super Poder: Carta %d venceu (%d)\n", 2 - win_superpoder, win_superpoder);

return 0;
} 

