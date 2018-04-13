/*
 * Ejercicio 05 de la Unidad 02.
 */

#include <stdio.h>

void br(void);
void ic(void);

int main(void)
{
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf(",\n");
    br();
    printf("\n");

    return 0;
}


void br(void)
{
    printf("Brasil, Rusia");
}

void ic(void)
{
    printf("India, China");
}
