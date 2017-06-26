/*
* Ejercicio 02 de la Unidad 04.
*/

#include <stdio.h>
#include <string.h>

#define TAM_NOMBRE 		40
#define TAM_FORMATO		20
#define FFLUSH(flujo)	fscanf(flujo, "%*[^\n]%*c")

int main(void)
{
	char nombre[TAM_NOMBRE+1];
	char formato[TAM_FORMATO];

	printf("Introduce tu nombre: ");
	sprintf(formato, "%%%hhus", TAM_NOMBRE);
	scanf(formato, nombre);
	FFLUSH(stdin);

	unsigned char longitud_nombre = strlen(nombre);

	printf("Tu nombre en distintos formatos:\n"
				 "\"%s\"\n"
				 "\"%20s\"\n"
				 "\"%-20s\"\n" 
				 "\"%*s\"\n", nombre, nombre, nombre, longitud_nombre+3, nombre);
	
	return 0;
}
