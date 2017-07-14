/*
* Librería de herramientas a utilizar con los ejerciciios.
*/


#include "util.h"


/*
* Limpiar el búfer del flujo stdin.
* 
* Argumentos:
*   Ninguno.
*
* Retorno:
*   UT_OK si el búfer es limpiado correctamente.
*   UT_ERR si hay algún error. En utilErr queda grabado el código de error.
*/
int limpiarStdin(void)
{
    char caracter;

    while ((caracter = getchar()) != '\n')
    {
        if (caracter != EOF) continue;

        if (feof(stdin) != 0) break;
            
        #if __UTILERR_DEBUG__ == 1
            perror("Error en getchar()");
        #endif  
        setUtilErr(UT_ERR_LIMPIAR_BUFFER_STDIN);
        return UT_ERR;
    }

    return UT_OK;
}



/*
* Leer una cadena por la entrada estándar (stdin) hasta encontrar un salto de 
* línea o alcanzar un número máximo de caracteres leídos. Además, limpia el 
* búfer de entrada en caso de haber introducido más caracteres que el máximo
* posible a ser leídos.
*
* Argumentos:
*   char * cadena: lugar donde guardar la cadena leída. El salto de línea no se
*       guarda en cadena.
*   int numMax: valor para determinar el número máximo de caracteres a leer 
*       desde entrada. El número máximo de caracteres a ser leídos es numMax-1.
*
* Retorno:
*   Devuelve char * con la dirección donde se guarda la cadena leída en caso de
*       leer la cadena correctamente. Al final de la cadena leída añade un 
*       carácter fin de cadena '\0'. Si hay error al limpiar el bufer restante, 
*       en utilErr se guarda el estado (comprobar con hayUtilErr).
*   Null si hay error en la lectura (en tal caso el contenido de cadena es 
*       inconsistente). El error ocurrido se guarda en utilErr; 
*/
char * getsStdin(char * cadena, int numMax)
{
    if (numMax < 1 || cadena == NULL)   
    {
        setUtilErr(UT_ERR_ARGS);
        return NULL;
    }

    char caracter;
    int i;

    // Leer la cadena desde stdin
    for (i = 0; i < numMax-1; ++i)
    {
        caracter = getchar();

        if (caracter == '\n') break;

        if (caracter == EOF)
        {
            if (feof(stdin) != 0) break;

            #if __UTILERR_DEBUG__ == 1
                perror("Error en getchar()");
            #endif  
            setUtilErr(UT_ERR_LECTURA_STDIN);
            return NULL;
        }

        cadena[i] = caracter;
    }

    cadena[i] = '\0';

    restablecerUtilErr();
    
    // Limpiar búfer.
    if (i == numMax-1) 
        limpiarStdin();
         
    return cadena;
}



/*
* Limpiar el búfer de entrada a bajo nivel de un flujo de entrada.
*
* Argumentos:
*   int fd: Descriptor de fichero a limpiar su búfer.
*
* Retorno:
*   UT_OK si el búfer es limpiado correctamente.
*   UT_ERR si hay algún error. En utilErr queda grabado el código de error.
*/
int fflushin(int fd)
{
    if (fd < 0)
    {
        setUtilErr(UT_ERR_ARGS);
        return UT_ERR;
    }

    struct timeval timeout, savetime;
    fd_set readfds, savefds;
    int retorno, retselect;
    unsigned char byte;
    
    timeout.tv_sec = 0;
    timeout.tv_usec = 0;    
    FD_ZERO(&readfds);
    FD_SET(fd, &readfds);
    
    savefds = readfds;
    savetime = timeout;

    do
    {
        retselect = select(fd+1, &readfds, NULL, NULL, &timeout);
    
        switch (retselect)
        {
            case 0:
                retorno = UT_OK;
                break;
            case -1:
                #if __UTILERR_DEBUG__ == 1
                    perror("Error en función select");
                #endif
                setUtilErr(UT_ERR_COMPROBAR_BUFER_BAJO);
                retorno = UT_ERR;
                break;
            default:
                read(fd, &byte, 1);
                readfds = savefds;
                timeout = savetime;
                break;
        }
    } while (retselect > 0);

    return retorno;
}
