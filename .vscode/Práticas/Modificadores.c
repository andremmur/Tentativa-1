#include <stdio.h>

int main (){

    int numeroSinal = 3000000000;
    unsigned numeroSemSinal = 3000000000;
    int numeroNormal = 2147483647;
    long long int numeroGrande = 2147483647;
    double numeroPreciso = 3.12159265797868987979;
    long double numeroMuitoPreciso = 3.12159265797868987979;
    short int numeroPequeno = 32767;

    printf("Número com Sinal: %d\n", numeroSinal);
    printf("Número sem Sinal: %u\n", numeroSemSinal);

    printf("Número Normal: %d\n", numeroNormal);
    printf("Número Grande: %d\n", numeroGrande);

    numeroGrande = 2147483648;
    printf("Número Grande Atualizado: %ld\n", numeroGrande);

    printf("Número Preciso: %.15f\n", numeroPreciso);
    printf("Número Muito Preciso: %.21llf\n", numeroMuitoPreciso);

    printf("Número Pequeno: %d\n", numeroPequeno);

    numeroPequeno = 32768;
    printf("Número Pequeno Atualizado: %d\n", numeroPequeno);

    return 0;
}