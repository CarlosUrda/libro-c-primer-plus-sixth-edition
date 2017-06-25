/*
* Ejercicio 01 de la Unidad 04.
*/

#include <stdio.h>

#define TAM_NOMBRE_MAX		20
#define TAM_APELLIDO_MAX	30
#define TAM_FORMATO_MAX		10

#define FFLUSH(flujo)	fscanf(flujo, "%*[^\n]%*c")

int main(void)
{
	char nombre[TAM_NOMBRE_MAX+1], apellido[TAM_APELLIDO_MAX+1];
	char formato[TAM_FORMATO_MAX];

	printf("Introduce tu nombre: ");
	sprintf(formato, "%%%hhus", TAM_NOMBRE_MAX);
	scanf(formato, nombre);
	FFLUSH(stdin);	

	printf("Introduce tu apellido: ");
	sprintf(formato, "%%%hhus", TAM_APELLIDO_MAX);
	scanf(formato, apellido);

	printf("Te llamas: %s, %s\n", apellido, nombre);

	return 0;
}
