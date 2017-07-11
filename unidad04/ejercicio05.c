/*
* Ejercicio 05 de la Unidad 04.
*/

#include <stdio.h>


int main(void)
{
    float velocidad, tamanno, tiempo;

    printf("Introduce la velocidad de bajada (Mb/s): ");
    scanf("%f", &velocidad);
        
    printf("Introduce el tamaño del archivo (MB): ");
    scanf("%f", &tamanno);
    
    tiempo = tamanno*8 / velocidad;
    printf("A %.2f Mb/s, un archivo de %.2f MB se bajará en %.2f sg\n",
           velocidad, tamanno, tiempo);

    return 0;
}


