/*
* Ejercicio 08 de la Unidad 02.
*/

#include <stdio.h>

void uno_tres(void);
void dos(void);


int main(void)
{
	printf("Empezando ahora:\n");
	uno_tres();
	printf("¡Hecho!\n");
}


void uno_tres(void)
{
	printf("uno\n");
	dos();
	printf("tres\n");
}


void dos(void)
{
	printf("dos\n");
}
