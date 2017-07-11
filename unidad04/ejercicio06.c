/*
* Ejercicio 06 de la Unidad 04.
*/

#include <stdio.h>
#include <string.h>
#include "util.h"

#define TAM_MAX_TEXTO   20

int main(void)
{
    char nombre[TAM_MAX_TEXTO], apellido[TAM_MAX_TEXTO];

    printf("Introduce tu nombre: ");
    if (getstdin(nombre, TAM_MAX_TEXTO) == NULL)
    {
        printUtilErr("Error al llamar a getstdin");
        return -1;
    }

    printf("Introduce tu apellido: ");
    if (getstdin(apellido, TAM_MAX_TEXTO) == NULL)
    {
        printUtilErr("Error al llamar a getstdin");
        return -1;
    }

    int tamNombre = strlen(nombre),
        tamApellido = strlen(apellido);

    printf("%s %s\n", nombre, apellido);
    printf("%*d %*d\n", tamNombre, tamNombre, tamApellido, tamApellido);

    printf("%s %s\n", nombre, apellido);
    printf("%-*d %-*d\n", tamNombre, tamNombre, tamApellido, tamApellido);

    return 0;
}
