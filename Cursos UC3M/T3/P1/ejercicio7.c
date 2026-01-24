#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Variables
    int dividendo, divisor, cociente, resto;

    // Pedir los datos
    printf("Calculadora de cociente y resto de una división.\n");
    printf("Introduce el dividendo: ");
    scanf("%d", &dividendo);
    printf("Introduce el divisor: ");
    scanf("%d", &divisor);

    // Calculos
    cociente = dividendo / divisor;
    resto = dividendo % divisor;

    // Mostrar resultados
    printf("El cociente de %d dividido entre %d es %d\n", dividendo, divisor, cociente);
    printf("El resto de %d dividido entre %d es %d\n", dividendo, divisor, resto);
    return 0;
}

