#include <stdio.h>
#include <stdlib.h>

int voce(*meucoracao) {
   
    printf(meucoracao);
    printf(*meucoracao);

int main (int argc, char *argv[]) {
    char voce;
    char *meucoracao;
    //voce = "amor";
    *meucoracao = &voce;
    voce(*meucoracao);
}



