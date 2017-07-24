/*
* Ejercicio 08 de la Unidad 05.
*/

#include <stdio.h>
#include "util.h"

int main(void)
{
    int modulo, numero;

    printf("Introduce el número a usar de módulo: ");
    scanf("%d", &modulo);
    limpiarStdin();

    while (1)
    {
        printf("Introduce el número a calcular (0 salir): ");
        scanf("%d", &numero);
        limpiarStdin();

        if (numero == 0)
            break;

        printf("Resultado de %d%%%d = %d\n", numero, modulo, numero % modulo);
    }

    printf("\nSaliendo...\n");

    return 0;
}
