#include <stdio.h>
int main() {
    //Declaração de variáveis
    int pessoa1, pessoa2;

    //Leitura de idades
    printf("Idade Pessoa 1: ");
    scanf("%d", &pessoa1);
    printf("Idade Pessoa 2: ");
    scanf("%d", &pessoa2);

    //Estrutura Condicional Encadeada (Apenas um dos blocos será executado)
    if (pessoa1 > pessoa2){
    //Caso a pessoa 1 seja mais velha
    printf("Pessoa 1 é mais velha que pessoa 2");} 
    
    else if (pessoa1 < pessoa2){
    //Caso a pessoa 2 seja mais velha
    printf("Pessoa 2 é mais velha que pessoa 1");}
    
    else{
    //Caso a idade das duas seja igual
    printf("As duas pessoas tem a mesma idade.");}
    
    return 0;
}