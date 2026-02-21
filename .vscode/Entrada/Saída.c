#include <stdio.h>

int main() {

    int idade = 17;
    float altura = 1.77;
    char opção = 'A';
    char nome [20] = "Andrews";
    
    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    printf("Digite sua altura:\n", altura);
    scanf("%f", &altura);

    printf("Digite seu nome:\n", nome);
    scanf(" %s", nome);

    printf("digite sua opção:\n", opção);
    scanf(" #c", &opção);

    printf("sua idade é: %d\n", idade);
    printf("sua altura é: %f\n", altura);
    printf("seu nome é: %s\n", nome);
    printf("sua opção é: %c\n", opção);

}