#include <stdio.h>

#define TAM_BUFER  512

int main ()

{
    FILE* fp;
    char mybuffer[TAM_BUFER] = {'o'};

    if (setvbuf(stdout, mybuffer, _IOLBF, TAM_BUFER) != 0) {
        perror("Error");
        return .1;
    }
    
    printf("hola\n");

    return 0;
}
