/*
* Módulo para tratar los errores generados en la librería util.c
*/

#include <stdio.h>
#include "utilerr.h"


static int utilErr = UT_OK;


/*
* Obtener un mensaje de error asociado a un código de error.
* 
* Argumentos:
*   int numErr: código de error a obtener su mensaje de error.
*
* Retorno:
*   Cadena char * con el mensaje de error.
*
* Mejoras:
*   Comprobar si no da warning quitar los break.
*/
char * strUtilErr_int(int numErr)
{
    switch (numErr)
    {
        case UT_OK:
            return UT_PREMENSAJE_ERR "Todo correcto.";
            break;
        case UT_ERR:
            return UT_PREMENSAJE_ERR "Error genérico.";
            break;
        case UT_ERR_LECTURA_STDIN:
            return UT_PREMENSAJE_ERR "Error en la lectura de datos desde stdin.";
            break;
        case UT_ERR_ARGS:
            return UT_PREMENSAJE_ERR "Error en los argumentos.";
            break;
        case UT_ERR_COMPROBAR_BUFER_BAJO:
            return UT_PREMENSAJE_ERR 
                "Error al comprobar si el búfer bajo nivel está vacío";
            break;
        case UT_ERR_LIMPIAR_BUFFER_STDIN:
            return UT_PREMENSAJE_ERR 
                "Error al limpiar los caracteres restantes en el búfer stdin.";
            break;
        default:
            return UT_PREMENSAJE_ERR "Error desconocido.";
            break;
    }
}


/*
* Obtener un mensaje de error asociado con el código de error establecido en 
* utilErr.
*
* Argumentos:
*   Ninguno.
*
* Retorno:
*   Cadena char * con el mensaje de error.
*/
char * strUtilErr_void(void)
{
    return strUtilErr_int(utilErr);
}


/*
* Imprimir por la salida stderr el mensaje de error asociado a un número de 
* error.  
* 
* Argumentos:
*   int numErr: número del error a imprimir su mensaje asociado.
*
* Retorno:
*   Ninguno.
*/
void printUtilErr_int(int numErr)
{
    fprintf(stderr, "%s\n", strUtilErr(numErr));
}


/*
* Imprimir por la salida stderr el mensaje de error asociado a un número de 
* error. Al mensaje de salida puede añadirse un mensaje personalizado.
* 
* Argumentos:
*   int numErr: número del error a imprimir su mensaje asociado.
*   char * mensaje: mensaje opcional a imprimir antes del mensaje de error.
*
* Retorno:
*   Ninguno.
*/
void printUtilErr_int_pchar(int numErr, char * mensaje)
{
    if (mensaje == NULL)
        printUtilErr_int(numErr);
    else
        fprintf(stderr, "%s%s%s\n", mensaje, ": ", strUtilErr(numErr));
}


/*
* Imprimir un mensaje de error por la salida stderr en función del error
* fijado en la variable interna utilErr.
* 
* Argumentos:
*   char * mensaje: mensaje opcional a imprimir antes del mensaje de error.
*
* Retorno:
*   Ninguno.
*/
void printUtilErr_pchar(char * mensaje)
{
    fprintf(stderr, "%s\n", strUtilErr());
}


/*
* Establecer el número de error a la variable interna utilErr.
*
* Argumentos:
*   int numErr: número de error a fijar. 
*
* Retorno:
*   Ninguno.
*/
void setUtilErr(int numErr)
{
    utilErr = numErr;
}


/*
* Obtener el número de error a establecido en la variable interna utilErr.
*
* Argumentos:
*   Ninguno.
*
* Retorno:
*   Valor int con número del error establecido en utilErr.
*/
int getUtilErr(void)
{
    return utilErr;
}


/*
* Limpiar el error establecido en la variable interna utilErr.
*
* Argumentos:
*   Ninguno.    
*
* Retorno:
*   Ninguno.
*/
void limpiarUtilErr(void)
{
    utilErr = UT_OK;
}
