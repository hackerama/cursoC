#include <stdio.h>
#include <stdlib.h>


int main (int argc, char *argv[]) {
    
    int voce;
    int *meucoracao = NULL;
    voce = 10;
    meucoracao = &voce;
    
    printf("%p\n", meucoracao);
    printf("%d\n", *meucoracao);
}



