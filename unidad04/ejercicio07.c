/*
* Ejercicio 07 de la Unidad 04.
*/

#include <stdio.h>
#include <float.h>


int main(void)
{
    float f = 1.0 / 3.0;
    double d = 1.0 / 3.0;

    printf("4 dígitos (float) %.4f\n", f);
    printf("4 dígitos (double) %.4lf\n", d);
     
    printf("12 dígitos (float) %.12f\n", f);
    printf("12 dígitos (double) %.12lf\n", d);

    printf("16 dígitos (float) %.16f\n", f);
    printf("16 dígitos (double) %.16lf\n", d);
    
    printf("FLT_DIG: %hhu\n", FLT_DIG);
    printf("DBL_DIG: %hhu\n", DBL_DIG);

    return 0;
}
