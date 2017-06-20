/*
* Ejercicio 04 de la Unidad 03.
*/

#include <stdio.h>

int main(void)
{
	double decimal;

	printf("Introduce un número decimal: ");
	scanf("%lf", &decimal);

	printf("Notación punto flotante: %f\n", decimal);
	printf("Notación exponencial: %e\n", decimal);
	printf("Notación hexadecimal p: %a\n", decimal);

	return 0;
}

