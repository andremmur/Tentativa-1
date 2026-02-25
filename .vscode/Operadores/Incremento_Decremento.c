#include <stdio.h>

int main (){

    int numero1 = 1, resultado;

    printf("Antes Incremento: %d\n", numero1);
    resultado = numero1++;
    printf("Após Pós-Incremento: %d - Resultado: %d\n", numero1, resultado);

    resultado = ++numero1;
    printf("Após Pré-Incremento: %d - Resultado: %d\n", numero1, resultado);

    printf("Antes Decremento: %d\n", numero1);
    resultado = numero1--;
    printf("Após Pós-Decremento: %d - Resultado: %d\n", numero1, resultado);

    resultado = --numero1;
    printf("Após Pré-Decremento: %d - Resultado: %d\n", numero1, resultado);

}