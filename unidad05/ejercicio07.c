/*
* Ejercicio 07 de la unidad 05.
*/

#include <stdio.h>
#include "util.h"


double cubo(double base)
{
    return base * base * base;
}


int main(void)
{
    double numero;

    printf("Introduce el número a calcular su cubo: ");
    scanf("%lf", &numero);
    limpiarStdin();

    printf("El cubo de %.3le es: %.3le\n", numero, cubo(numero));

    return 0;
}

