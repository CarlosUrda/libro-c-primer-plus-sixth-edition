/*
* Ejercicio 03 de la Unidad 05.
*/

#include <stdio.h>
#include "util.h"

int main(void)
{
    int diasTotales, dias, semanas;

    while (1)
    {
        printf("\nIntroduce el número de días (<=0 salir): ");
        scanf("%d", &diasTotales);
        limpiarStdin();

        if (diasTotales <= 0)
            break;

        semanas = diasTotales / 7;
        dias = diasTotales % 7;

        printf("\nDias totales Semanas Días\n"
               "%12d%8d%5d\n", diasTotales, semanas, dias);
    }

    printf("\nSaliendo...\n");

    return 0;
}

