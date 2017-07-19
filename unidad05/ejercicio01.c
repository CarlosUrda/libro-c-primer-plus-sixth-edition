/*
* Ejercicio 01 de la Unidad 05.
*/

#include <stdio.h>
#include "util.h"

#define MIN_POR_HORA    60

int main(void)
{
    int minutos, horas;

    while (1) {
        printf("\nIntroduce los minutos (<0 => salir): ");
        scanf("%d", &minutos);
        limpiarStdin();

        if (minutos <= 0)
            break;

        horas = minutos / MIN_POR_HORA;
        minutos %= MIN_POR_HORA;
        
        printf("\nHoras  Minutos\n"
               "%5d%9d\n", horas, minutos);
    }

    printf("\nSaliendo...\n");

    return 0;
}
