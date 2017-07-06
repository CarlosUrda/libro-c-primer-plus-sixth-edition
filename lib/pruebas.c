/*
* Pruebas de la entrada y salida estándar.
*/

#include <stdio.h>
#include "util.h"

#define TAM_MAX_TEXTO		10

int main(void)
{
	char texto1[TAM_MAX_TEXTO], texto2[TAM_MAX_TEXTO];

	printf("Introduce el texto: ");
	if (getstdin(texto1, TAM_MAX_TEXTO) == NULL)
	{
		printUtilErr("Error en getstdin()");		
		return -1;
	}

	printf("Texto leído: %s\n", texto1);

	printf("Introduce el texto 1: ");
	fgets(texto1, TAM_MAX_TEXTO, stdin);
	printf("Texto 1: %s", texto1);

	if (feof(stdin))
		printf("\nEl búfer está vacío.\n");
	else
		printf("\nEl búfer tiene contenido.\n");

	scanf("%*[^\n]%*c");

	printf("Introduce el texto 2: ");
	fgets(texto2, TAM_MAX_TEXTO, stdin);
	printf("Texto 2: %s\n", texto2);

	return 0;
}
