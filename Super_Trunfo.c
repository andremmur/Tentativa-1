#include <stdio.h>

int main(){

    int populacao1, npt1;
    float area1, pib1;
    char estado1;
    char nome1[30], codigo1[30];

    int populacao2, npt2;
    float area2, pib2;
    char estado2;
    char nome2[30], codigo2[30];


    //npt = número de pontos turísticos

    //variáveis separadas de acrodo com a carta
    //ex: "populacao1" = carta 1, "populacao2" = carta 2


    //PREENCHIMENTO DE INFORMAÇÕES DA PRIMEIRA CARTA:


    printf("Digite o estado da primeira carta:\n");
    scanf("%c", &estado1);

    printf("Digite o código da primeira carta:\n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da primeira carta:\n");
    scanf("%s", nome1);

    printf("Digite a população da primeira carta:\n");
    scanf("%d", &populacao1);

    printf("Digite a area da primeira carta:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira carta:\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da primeira carta:\n");
    scanf("%d", &npt1);


    //PREENCHIMENTO DE INFORMAÇÕES DA SEGUNDA CARTA:


    printf("Digite o estado da segunda carta:\n");
    scanf(" %c", &estado2);

    printf("Digite o código da segunda carta:\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da segunda carta:\n");
    scanf("%s", nome2);

    printf("Digite a população da seguda carta:\n");
    scanf("%d", &populacao2);

    printf("Digite a area da segunda carta:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda carta:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da segunda carta:\n");
    scanf("%d", &npt2);


    //INFORMAÇÕES DASDUAS CARTAS:


    printf("INFORMAÇÕES DA CARTA 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número  de Pontos Turísticos: %d\n", npt1);

    printf("INFORMAÇÕES DA CARTA 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número  de Pontos Turísticos: %d\n", npt2);
}