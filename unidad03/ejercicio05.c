/*
* Ejercicio 05 de la Unidad 03.
*/

#include <stdio.h>

int main(void)
{
    unsigned short annos;
    unsigned long long segundos;

    printf("Introduce tu edad: ");
    scanf("%hu", &annos);

    segundos = annos * 31560000U;

    printf("Tienes %hu años.\n", annos);
    printf("Tienes %llu segundos.\n", segundos);

    return 0;  
}
