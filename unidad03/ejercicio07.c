
/*
* Ejercicio 07 de la Unidad 03.
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	const float cm_por_pulgada = 2.54;
	float centimetros, pulgadas; 
	char opcion;

	printf("¿Deseas introducir el dato en centímetros (c) o pulgadas (p)?: ");
	scanf("%c", &opcion);
	opcion = toupper(opcion);
	
	if (opcion == 'C')
	{
		printf("Introduce el dato en centímetros: ");
		scanf("%f", &centimetros);
		pulgadas = centimetros / cm_por_pulgada;
		printf("%f centímetros son %f pulgadas.\n", centimetros, pulgadas);
	}
	else
	{
		printf("Introduce el dato en pulgadas: ");
		scanf("%f", &pulgadas);
		centimetros = pulgadas * cm_por_pulgada;
		printf("%f pulgadas son %f centimetros.\n", pulgadas, centimetros);
	}

	return 0;
}
