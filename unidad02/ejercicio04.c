/*
 * Ejercicio 04 de la Unidad 02.
 */

#include <stdio.h>

// Prototipos
void jolly(void);
void deny(void);


int main(void)
{
    jolly();
    jolly();
    jolly();
    deny();

    return 0;
}


void jolly(void)
{
    printf("For he's a jolly good fellow!\n");
}


void deny(void)
{
    printf("Which nobody can deny!\n");
}
