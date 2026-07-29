#include <stdio.h>
int main() {
    //Declaração de variáveis
    int idade;

    //Leitura de idades
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    //Estrutura Condicional Encadeada (Apenas um dos blocos será executado)
    if(idade < 12){
    printf("Você é criança.\n");} 
    
    else if(idade > 12 && idade < 18){
    printf("Você é adolescente.\n");}

    else if(idade > 18 && idade < 60){
        printf("Você é adulto.\n");}
    
    else{
    printf("Você é idoso(a).");}
    
    return 0;
}