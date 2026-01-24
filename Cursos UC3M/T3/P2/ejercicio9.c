#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Variables
    int x = 6;
    float y = 2.0;

    // Procesar datos
    printf("Resultado de la multiplicacion entre %d y %.2f es %.2f\n", x, y, x * y);
    printf("Resultado de la division entre %d y %.2f es %.2f\n", x, y, x / y);
    printf("Resultado del resto de la division entre %d y %.2f es %.2f\n", x, y, (int)x % (int)y);

    return 0;
}
