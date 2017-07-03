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
	FILE *file;
	
	file = fopen("dato.dat", "r");

	while (!feof(file))
	{
		p = fscanf(file, "%d ", &dato);
		printf("%d %d\n", p, dato);
	}

	return 0;
}

