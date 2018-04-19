/*
* Ejercicio 01 de la Unidad 03.
*/

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    int enteroMax = INT_MAX;
    int enteroMin = INT_MIN;
    unsigned int natural = UINT_MAX; 
    double decimalMax = DBL_MAX;
    double decimalMin = DBL_MIN;
    
    printf("Desbordamiento del natural %u por arriba: %u\n", natural, natural+1);
    printf("Desbordamiento del entero %d por arriba: %d\n", enteroMax, enteroMax+1);
    printf("Desbordamiento del natural %u por abajo: %u\n", 0U, 0U-1);
    printf("Desbordamiento del entero %d por abajo: %d\n", enteroMin, enteroMin-1);
    printf("Desbordamiento del double %e por arriba: %e\n", decimalMax, decimalMax+1e300);
    printf("Desbordamiento de double %e por abajo: %e. => Número Subnormal\n", decimalMin, decimalMin-10);

    return 0;
}
