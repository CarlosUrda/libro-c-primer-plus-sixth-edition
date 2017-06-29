
#include "util.h"

/*
* Limpiar el búfer de entrada a bajo nivel de un flujo de entrada.
*
*	Argumentos:
*	int fd: Descriptor de fichero a limpiar su búfer.
*
* Retorno:
*	0 si el búfer es limpiado correctamente.
* -1 si hay algún error.
*/
int fflushin(int fd)
{
	struct timeval timeout, savetime;
	fd_set readfds, savefds;
	int retorno = 1;
	unsigned char byte;
	
	timeout.tv_sec = 0;
	timeout.tv_usec = 0;	
	FD_ZERO(&readfds);
	FD_SET(fd, &readfds);
	
	savefds = readfds;
	savetime = timeout;

	do
	{
		int retselect = select(fd+1, &readfds, NULL, NULL, &timeout);
	
		switch (retselect)
		{
			case 1:
				read(fd, &byte, 1);
				readfds = savefds;
				timeout = savetime;
				break;
			case 0:
				retorno = 0;
				break;
			case -1:
				perror("Error en función select");
				retorno = -1;
				break;
		}
	} while (retorno == 1);

	return retorno;
}
