#include <stdio.h>

int main() {
// Variáveis da Carta 1
char estado1, cidade1[50], codigo1[50];
int populacao1, turismo1;
float area1, pib1;

// Variáveis da Carta 2
char estado2, cidade2[50], codigo2[50];
int populacao2, turismo2;
float area2, pib2;
 
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

//Saída de informações
   printf("===== DADOS CARTA 1 =====\n");
   printf("Código: %s\n", codigo1);
   printf("Estado: %c\n", estado1);
   printf("Cidade: %s\n", cidade1);
   printf("População: %d\n", populacao1);
   printf("Área: %.2f km²\n", area1);
   printf("PIB: %.2f bilhões de reais\n", pib1);
   printf("Numero de pontos turisticos: %d\n", turismo1);

   printf("===== DADOS CARTA 2 =====\n");
   printf("Código: %s\n", codigo2);
   printf("Estado: %c\n", estado2);
   printf("Cidade: %s\n", cidade2);
   printf("População: %d\n", populacao2);
   printf("Área: %.2f km²\n", area2);
   printf("PIB: %.2f bilhões de reais\n", pib2);
   printf("Numero de pontos turisticos: %d\n", turismo2);

   return 0;

}