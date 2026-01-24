#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Variables
    char nombre[50];

    // Pedir datos
    printf("Bienvenido a este programa!\n");
    printf("Por favor introduce tu nombre: ");
    scanf("%[^\n]", nombre);

    // Mostrar resultado
    printf("Hola, %s! Es un placer conocerte.\n", nombre);

    return 0;
}
