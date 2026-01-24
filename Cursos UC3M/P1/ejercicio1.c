#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Saludo
    printf("Hola \n");

    // Pedir el año de nacimiento y calcular la edad
    printf("Por favor introduce el año de tu nacimiento: ");
    int fecha;
    scanf("%d", &fecha);
    int años = 2026 - fecha;

    // Mostrar resultado
    printf("Si has nacido en el año %d entonces este año (2026) cumples %d años\n", fecha, años);

    return 0;
}
