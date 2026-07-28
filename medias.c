#include <stdio.h>
 
int main() {
    //Variáveis
    int nota1, nota2, nota3;
    int media;

    //Lendo as notas
    printf("=== CÁLCULO DA MÉDIA ===\n");
    printf("NOTA 1: ");
    scanf("%d", &nota1);

    printf("NOTA 2: ");
    scanf("%d", &nota2);

    printf("NOTA 3: ");
    scanf("%d", &nota3);

    //Calculando a média somando as notas e dividindo por 3
    media = (nota1 + nota2 + nota3) /3;

    //Saída das informações
    printf("===================\n");
    printf("A média geral é: %d", media);

    return 0;
}