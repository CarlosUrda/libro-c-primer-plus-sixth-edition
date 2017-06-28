/*
* Pruebas de la entrada y salida estándar.
*/

#include <stdio.h>

#define TAM_TEXTO_MAX		50

int main(void)
{
	char texto1[TAM_TEXTO_MAX], texto2[TAM_TEXTO_MAX];

	printf("Introduce el texto: ");
	int r1 = scanf("a%s", texto1);
	int r2 = scanf("%s", texto2);

	printf("El texto 1 leído es: %s\n", texto1);
	printf("El texto 2 leído es: %s\n", texto2);
	printf("Los resultados son r1(%d) r2(%d)\n", r1, r2);

	return 0;
}
