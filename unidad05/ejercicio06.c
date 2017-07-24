/*
* Ejercicio 06 de la Unidad 05
*/

#include <stdio.h>
#include <math.h>
#include "util.h"


int main(void)
{
    int numero, suma = 0;

    printf("Introduce número: ");
    scanf("%d", &numero);
    limpiarStdin();
   
    int numeroTemp = numero;
     
    while (numeroTemp > 0)
    {
        suma += pow(numeroTemp--, 2);
    }

    printf("La suma de los cuadrados de la sucesión hasta %d es %d\n",
           numero, suma);

    return 0;
}
