#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Variables
    int a, b, c;

    // Pedir datos
    printf("Comprobador de orden de tres numeros\n");
    printf("Ingrese tres numeros enteros separados por espacios: ");
    scanf("%d %d %d", &a, &b, &c);

    // Procesar datos
    printf("%d\n", ((a < b) && (b < c)));

    return 0;
}
