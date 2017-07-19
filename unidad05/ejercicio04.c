/*
* Ejercicio 04 de la Unidad 05.
*/

#include <stdio.h>
#include "util.h"

#define CM_POR_PULGADA      2.54
#define PULGADAS_POR_PIE    12

int main(void)
{
    float centimetros, pulgadas;
    int pies;

    while (1) {
        printf("\nIntroduce la altura en cms (<=0 salir): ");
        scanf("%f", &centimetros);
        limpiarStdin();

        if (centimetros <= 0)
            break;

        pulgadas = centimetros / CM_POR_PULGADA;
        pies = (int)pulgadas / PULGADAS_POR_PIE;
        pulgadas -= PULGADAS_POR_PIE * pies;
        
        printf("\nCentimetros      Pies  Pulgadas\n"
               "%11.2f%10d%10.2f\n", centimetros, pies, pulgadas); 
    }

    printf("\nSaliendo...\n");

    return 0;
}
