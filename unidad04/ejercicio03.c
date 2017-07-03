/*
* Ejercicio 03 de la Unidad 04.
*/

#include <stdio.h>


int main(void)
{
	float decimal;

	printf("Introduce un número decimal: ");
	scanf("%f", &decimal);
	
	printf("El número es %.1f o %.1e\n", decimal, decimal);

	printf("El número es %+.3f o %.3E\n", decimal, decimal);

	return 0;
}

