/*
* Ejercicio 05 de la Unidad 05.
*/

#include <stdio.h>
#include "util.h"


int main(void)
{
    int numero, suma = 0;

    printf("Introduce el número a calcular la suma hasta el mismo: "); 
    scanf("%d", &numero);
    limpiarStdin();

    while (numero > 0)
    {
        suma += numero;
        --numero;
    }

    printf("\nLa suma es %d\n", suma);

    return 0;
}
