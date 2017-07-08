#ifndef __UTIL__
    #define __UTIL__

#include <unistd.h>
#include <sys/types.h>
#include <sys/time.h>
#include <stdlib.h>
#include <stdio.h>
#include "utilerr.h"

/* Funciones */
char * getstdin(char *, int);
int fflushin(int);

#endif
