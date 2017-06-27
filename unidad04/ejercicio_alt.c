/*
* Ejercicio alternativo.
*
* Contar el número de veces que aparece repetida una letra en una cadena
* y el número de dichas letras que aparecen consecutivas.
*
*/

#include <stdio.h>
#include <string.h>

#define TAM_TEXT_MAX	1024
#define FFLUSH(flujo)	fscanf(flujo, "%*[^\n]%*c")

typedef unsigned short Ushort;
typedef enum {no_encontrada = 0, primera_vez = 1, mas_veces = 2} Aparicion;

int main(void)
{
	char texto[TAM_TEXT_MAX], letra;
	Ushort	longitudTexto, 
					repeticiones = 0, 
					consecutivas = 0,
					gruposConsecutivas = 0;
	Aparicion aparicion = no_encontrada;

	printf("Introduce el texto: ");
	FFLUSH(stdin);
	fgets(texto, TAM_TEXT_MAX, stdin);
	longitudTexto = strlen(texto);

	printf("Introduce la letra: ");
	FFLUSH(stdin);
	scanf("%c", &letra);

	for (Ushort i = 0; i < longitudTexto; ++i)
	{
		if (texto[i] == letra)
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
		else if (aparicion != no_encontrada)
		{
			if (aparicion == mas_veces)
				++gruposConsecutivas;
			aparicion = no_encontrada;
		}
	}

	printf("Los datos de la letra %c en el texto son:\n"
				 "Repeticiones: %hu"
				 "Consecutivas en total: %hu"
				 "Grupos de consecutivas: %hu", letra, repeticiones, consecutivas, gruposConsecutivas);
}
