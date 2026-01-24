#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Variables
    int edad, adulto;

    // Pedir los datos
    printf("Calculadora de mayoria de edad.\n");
    printf("Introduce tu edad: ");
    scanf("%d", &edad);

    // Calculos y mostrar resultados
    adulto = (edad >= 21);
    printf("%d \n", adulto);
    return 0;
}

