/*
* Modificación del ejercicio alternativo para adaptarlo a StackOverflow.
*
* Contar el número de veces que aparece repetida una letra en una cadena
* y el número de dichas letras que aparecen consecutivas.
*/

#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>

#define TAM_TEXT_MAX	1024

typedef unsigned short Ushort;
typedef enum {no_encontrada = 0, primera_vez = 1, mas_veces = 2} Aparicion;

int main(void)
{
	char texto[TAM_TEXT_MAX], letra;
	Ushort	longitudTexto, 
					repeticiones = 0, 
					consecutivas = 0,
					totalConsecutivas = 0,
					maxConsecutivas = 0,
					gruposConsecutivas = 0,
					gruposMaxConsecutivas = 0;
	Aparicion aparicion = no_encontrada;

	printf("Introduce el texto: ");
	__fpurge(stdin);
	fgets(texto, TAM_TEXT_MAX, stdin);
	longitudTexto = strlen(texto);

	printf("Introduce la letra: ");
	__fpurge(stdin);
	scanf(" %c", &letra);		// Hay un espacio en formato para ignorar caracteres en blanco.

	for (Ushort i = 0; i <= longitudTexto; ++i)
	{
		if (i < longitudTexto && texto[i] == letra)
		{
			++repeticiones;
			switch (aparicion)
			{
				case no_encontrada:
					aparicion = primera_vez;
					break;
				case primera_vez:
					consecutivas += 2;
					aparicion = mas_veces;
					break;
				case mas_veces:
					++consecutivas;
					break;
			}
		}
		else 
		{
			switch (aparicion)
			{
				case mas_veces:
					if (consecutivas == maxConsecutivas)
						++gruposMaxConsecutivas;
					else if (consecutivas > maxConsecutivas)
					{
						maxConsecutivas = consecutivas;
						gruposMaxConsecutivas = 1;
					}
					++gruposConsecutivas;
					totalConsecutivas += consecutivas;
					consecutivas = 0;

				case primera_vez:
					aparicion = no_encontrada;

				case no_encontrada:
					break;
			}
		}
	}

	printf("Los datos de la letra «%c» en el texto son:\n"
				 "%-40s %05hu\n"
				 "%-40s %05hu\n"
				 "%-42s %05hu\n"
				 "%-42s %05hu\n"
				 "%-40s %05hu\n", letra,
				 "Apariciones totales:", repeticiones, 
				 "Consecutivas en total:", totalConsecutivas, 
				 "Máximo nº de consecutivas:", maxConsecutivas, 
				 "Grupos de máximo nº de consecutivas:", gruposMaxConsecutivas, 
				 "Grupos totales de consecutivas:", gruposConsecutivas);

	return 0;
}

