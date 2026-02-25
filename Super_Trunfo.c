#include <stdio.h>

int main(){

    unsigned long int populacao1; 
    int npt1;
    float area1, pib1, densidade1, ppc1;
    char estado1;
    char nome1[30], codigo1[30];
    float SuperPoder1;

    unsigned long int populacao2;
    int npt2;
    float area2, pib2, densidade2, ppc2;
    char estado2;
    char nome2[30], codigo2[30];
    float SuperPoder2;

    //ppc = PIB per Capita
    //npt = número de pontos turísticos

    //variáveis separadas de acordo com a carta
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


    //OPERAÇÕES:


    densidade1 = populacao1 / area1;
    ppc1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    ppc2 = pib2 / populacao2;

    SuperPoder1 = populacao1 + area1 + pib1 + npt1 + ppc1 + (1/densidade1);
    SuperPoder2 = populacao2 + area2 + pib2 + npt2 + ppc2 + (1/densidade2);


    //INFORMAÇÕES DAS DUAS CARTAS:


    printf("INFORMAÇÕES DA CARTA 1:\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número  de Pontos Turísticos: %d\n", npt1);
    printf("Densidade Populacional: %f\n", densidade1);
    printf("PIB per Capita: %f\n", ppc1);
    printf("Super Poder: %f\n\n", SuperPoder1);

    printf("INFORMAÇÕES DA CARTA 2:\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número  de Pontos Turísticos: %d\n", npt2);
    printf("Densidade Populacional: %f\n", densidade2);
    printf("PIB per Capita: %f\n", ppc2);
    printf("Super Poder: %f\n\n", SuperPoder2);


    //COMPARAÇÃO DAS DUAS CARTAS:


    printf("1 = Carta 1 venceu\n");
    printf("0 = Carta 2 venceu\n\n");

    printf("COMPARAÇÃO DAS DUAS CARTAS:\n\n");
    printf("População: %d\n", populacao1 >populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Número  de Pontos Turísticos: %d\n", npt1 > npt2);
    printf("Densidade Populacional: %d\n", densidade1 > densidade2);
    printf("PIB per Capita: %d\n", ppc1 > ppc2);
    printf("Super Poder: %d\n\n", SuperPoder1 > SuperPoder2);
    
    return 0;
}