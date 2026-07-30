#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcao;
    int numero_secreto;
    int palpite;

    srand(time(NULL));

    printf("=========================\n");
    printf("  JOGO DE ADIVINHAÇÃO    \n");
    printf("=========================\n");
    printf("1 - Modo Fácil (Número entre 1 e 5)\n");
    printf("2 - Modo Médio (Número entre 1 e 10)\n");
    printf("3 - Modo Difícil (Número entre 1 e 50)\n");
    printf("0 - Sair do Jogo\n");
    printf("=========================\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            numero_secreto = (rand() % 5) + 1;
            printf("Escolha um número de 1 a 5: ");
            scanf("%d", &palpite);

            if (palpite == numero_secreto) {
                printf("Parabéns! Você venceu o modo fácil!\n");
            } else {
                printf("Que pena, você errou. O número era %d.\n", numero_secreto);
            }
            break;

        case 2:
            numero_secreto = (rand() % 10) + 1;
            printf("Escolha um número de 1 a 10: ");
            scanf("%d", &palpite);

            if (palpite == numero_secreto) {
                printf("Incrível! Você venceu o modo médio!\n");
            } else {
                printf("Que pena, você errou. O número era %d.\n", numero_secreto);
            }
            break;

        case 3:
            numero_secreto = (rand() % 50) + 1;
            printf("Escolha um número de 1 a 50: ");
            scanf("%d", &palpite);

            if (palpite == numero_secreto) {
                printf("Sensacional! Você venceu o modo difícil!\n");
            } else {
                printf("Que pena, você errou. O número era %d.\n", numero_secreto);
            }
            break;

        case 0:
            printf("Saindo do jogo... Até a próxima!\n");
            break;

        default:
            printf("Opção inválida! Reinicie o jogo e escolha de 0 a 3.\n");
            break;
    }

    return 0;
}