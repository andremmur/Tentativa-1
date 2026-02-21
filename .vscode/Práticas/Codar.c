#include <stdio.h>

int main(){

    int idade, matricula;
    float altura;
    char nome[50] = "Andrews";
    
    printf("Digite a sua idade:\n");
    scanf("%d", &idade);

    printf("Digite a sua altura:\n");
    scanf("%f", &altura);

    printf("Digite o seu nome:\n");
    scanf("%s", &nome);

    printf("Digite a sua matricula:\n");
    scanf("%i", &matricula);

    printf("Nome do aluno: %s - Matricula: %i\n", nome, matricula);
    printf("Idade do aluno: %d - Altura: %f\n", idade, altura);

}