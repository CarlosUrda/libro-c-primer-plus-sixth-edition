#ifndef __UTIL__
    #define __UTIL__

#include <unistd.h>
#include <sys/types.h>
#include <sys/time.h>
#include <stdlib.h>
#include <stdio.h>
#include "utilerr.h"

/* Funciones */
int limpiarStdin(void);
char * getsStdin(char *, int);
int fflushin(int);

#endif
