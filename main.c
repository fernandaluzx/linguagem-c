#include <stdio.h>

int main() {
  int idade, credencial;
  float altura;
  char nome[20];

  printf("Digite sua idade: \n");
  scanf("%d", &idade);

  printf("Digite sua altura: \n");
  scanf("%f", &altura);

  printf("Digite seu nome: \n");
  scanf("%s", nome);

  printf("Digite sua credencial: \n");
  scanf("%d", &credencial);

  printf("===== DADOS =====\n");
  printf("Nome do aluno: %s - Credencial: %d \n", nome, credencial);
  printf("Idade: %d - Altura: %.2f", idade, altura);

    return 0;
}
