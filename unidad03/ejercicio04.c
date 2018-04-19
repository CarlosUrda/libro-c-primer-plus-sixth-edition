/*
* Ejercicio 04 de la Unidad 03.
*/

#include <stdio.h>

int main(void)
{
    double decimal;

    printf("Introduce un número decimal: ");
    scanf("%lf", &decimal);

    printf("Notación punto flotante: %lf\n", decimal);
    printf("Notación exponencial: %le\n", decimal);
    printf("Notación hexadecimal p: %la\n", decimal);

    return 0;
}

