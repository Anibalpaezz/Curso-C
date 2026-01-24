#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Variables
    float euros;
    float cambio_dolar = 1.286;
    float cambio_libra = 0.865;

    // Pedir los datos
    printf("Calculadora de conversión de euros a dólares y libras.\n");
    printf("Introduce la cantidad en euros: ");
    scanf("%f", &euros);

    // Calculos
    float dolares = euros * cambio_dolar;
    float libras = euros * cambio_libra;

    // Mostrar resultados
    printf("%.2f euros son %.2f dólares.\n", euros, dolares);
    printf("%.2f euros son %.2f libras.\n", euros, libras);

    return 0;
}
