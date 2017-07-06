/*
* Ejercicio alternativo para StackOverflow.
*
* Saber cómo leer datos de un archivo y que finalice
* correctamente al final sin intentar leer datos 
* cuando ya no hay más.
*/

#include <stdio.h>


int main(void)
{
	int dato, p;
	char * nombreFile = "dato.dat";
	FILE *file;
	
	file = fopen(nombreFile, "r");
	if (file == NULL)
	{
		fprintf(stderr, "No existe el archivo %s\n", nombreFile);
		return -1;
	}

	while (!feof(file))
	{
		p = fscanf(file, "%d ", &dato);
		printf("%d %d\n", p, dato);
	}

	return 0;
}

