/*
* Ejercicio 01 de la Unidad 03.
*/

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
	int entero = INT_MAX;
	double decimalMax = DBL_MAX;
	double decimalMin = DBL_MIN;
	
	printf("Desbordamiento del entero %d por arriba: %d\n", entero, entero+1);	
	printf("Desbordamiento del double %e por arriba: %e\n", decimalMax, decimalMax+1e300);	
	printf("Desbordamiento de double %e por abajo: %e. => Número Subnormal\n", decimalMin, decimalMin-1);	

	return 0;
}
