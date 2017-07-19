/*
* Ejercicio 02 de la Unidad 05.
*/

#include <stdio.h>
#include "util.h"

int main(void)
{
    int numero, numeroMax;

    printf("\nIntroduce el número: ");
    scanf("%d", &numero);
    limpiarStdin();

    numeroMax = numero + 10;

    while (numero <= numeroMax)
        printf("%5d ", numero++);
    
    printf("\n");
    
    return 0;
}
