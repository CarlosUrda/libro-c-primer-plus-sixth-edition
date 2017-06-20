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

	segundos = annos * 3.156e7;

	printf("Tienes %hu años.\n", annos);
	printf("Tienes %lld segundos.\n", segundos);
	
	return 0;  
}
