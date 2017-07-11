/*
* Ejercicio 08 de la Unidad 04.
*/

#include <stdio.h>

#define LITROS_POR_GALON    3.785
#define KMS_POR_MILLA       1.609


double galones_a_litros(double galones)
{
    return galones * LITROS_POR_GALON;
}

double millas_a_kms(double millas)
{
    return millas * KMS_POR_MILLA;
}


int main(void)
{
    double millas, galones;

    printf("Introduce las millas recorridas: ");
    scanf("%lf", &millas);

    printf("Introduce los galones consumidos: ");
    scanf("%lf", &galones);

    double kms = millas_a_kms(millas);
    double litros = galones_a_litros(galones);

    printf("Millas: %.2lf\n"
           "Kms: %.2lf\n"
           "Galones: %.2lf\n"
           "Litros: %.2lf\n", millas, kms, galones, litros);
     
    double millas_por_galon = millas / galones;
    printf("Millas/Galones = %.1f\n", millas_por_galon);

    double litros_por_km = litros / kms;
    printf("Litros/Km = %.1f\n", litros_por_km);

    return 0;
}
