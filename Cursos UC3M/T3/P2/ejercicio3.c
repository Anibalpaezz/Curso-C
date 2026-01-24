#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Variables
    int numero = 3;
    int *pNumero = &numero;

    // Imprimir valores
    printf("Valor de numero: %d\n", numero);
    printf("Valor en memoria: %p\n", (void *)pNumero);

    return 0;
}
