/*
* Ejercicio 04 de la Unidad 04.
*/

#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

#define TAM_MAX_NOMBRE	20

int main(void)
{
	float altura;
	char nombre[TAM_MAX_NOMBRE];

	printf("Introduce tu nombre: ");
	fgets(nombre, TAM_MAX_NOMBRE, stdin);
	nombre[strlen(nombre)-1] = '\0';

	printf("Introduce tu altura en centímetros: ");
	__fpurge(stdin);
	scanf("%f", &altura);

	printf("Hola %s, tu altura es %.2f\n", nombre, altura/100);

	return 0;
}
