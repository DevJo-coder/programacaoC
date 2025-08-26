#include <stdio.h>
    int main(){
        char estado, estado2, codigo[50], codigo2[50], cidade[50], cidade2[50];
        int populacao, populacao2, pontost, pontost2;
        float area, area2, pib, pib2;


        printf("Bem vindo ao Super Trunfo! \n");
        printf("Insira as informações das cartas que serão comparadas. \n");

        printf("Primeira Carta \n");
        printf("Estado: \n");
        scanf("%c", &estado);
        printf("Código: \n");
        scanf("%s", &codigo);
        printf("Cidade: \n");
        scanf("%s", &cidade);
        printf("População: \n");
        scanf("%d", &populacao);
        printf("Área Total: \n");
        scanf("%f", &area);
        printf("PIB: \n");
        scanf("%f", &pib);
        printf("Pontos Turísticos: \n");
        scanf("%d", &pontost);


        printf("Segunda Carta \n");
        printf("Estado: \n");
        scanf("%s", &estado2);
        printf("Código: \n");
        scanf("%s", &codigo2);
        printf("Cidade: \n");
        scanf("%s", &cidade2);
        printf("População: \n");
        scanf("%d", &populacao2);
        printf("Área Total: \n");
        scanf("%f", &area2);
        printf("PIB: \n");
        scanf("%f", &pib2);
        printf("Pontos Turísticos: \n");
        scanf("%d", &pontost2);


        printf("Vamos comparar! \n");
        printf("Primeira Carta \n");
        printf("Estado: %c \n - Código: %s \n - Cidade: %s \n - População: %d \n - Área Total: %f \n - PIB: %f \n - Pontos Turísticos: %d \n", estado, codigo, cidade, populacao, area, pib, pontost);

        printf("Segunda Carta \n");
        printf("Estado: %c \n - Código: %s \n - Cidade: %s \n - População: %d \n - Área Total: %f \n - PIB: %f \n - Pontos Turísticos: %d \n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontost2);

