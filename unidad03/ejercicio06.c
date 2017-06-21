
/*
* Ejercicio 06 de la Unidad 03.
*/

#include <stdio.h>

int main(void)
{
	const float masa_molecula_agua = 3e-23;
	const float masa_cuarto_agua = 950;
	float cuartos_agua;

	printf("Introduce la cantidad de agua (en cuartos): ");
	scanf("%f", &cuartos_agua);

	float moleculas_agua = cuartos_agua * masa_cuarto_agua / masa_molecula_agua;
	printf("Número de moléculas de agua en %.2f cuartos: %e\n", cuartos_agua, moleculas_agua);

	return 0;
}
