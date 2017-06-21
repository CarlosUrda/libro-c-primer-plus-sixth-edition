
/*
* Ejercicio 08 de la Unidad 03.
*/

#include <stdio.h>

typedef unsigned short ushort;

int main(void)
{
	const ushort copas_por_pinta = 2;
	const ushort onzas_por_copa = 8;
	const ushort cucharadas_por_onza = 2;
	const ushort cucharillas_por_cucharadas = 3;
	float copas, pintas, onzas, cucharadas, cucharillas;

	printf("Introduce el volumen en copas: ");
	scanf("%f", &copas);

	pintas = copas / copas_por_pinta;
	onzas = copas * onzas_por_copa;
	cucharadas = onzas * cucharadas_por_onza;
	cucharillas = cucharadas * cucharillas_por_cucharadas;

	printf("%f copas equivale a:\n"
				 "- Pintas: %f\n"
				 "- Onzas: %f\n"
				 "- Cucharadas: %f\n"
				 "- Cucharillas: %f\n", 
				 copas, pintas, onzas, cucharadas, cucharillas);

	return 0;
}
