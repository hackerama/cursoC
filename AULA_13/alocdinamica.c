#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

    int *p;

    p = malloc(sizeof(int)); // aloca a memoria e o endereco vai pra "p"    
    *p = 42; // altero o conteudo do ponteiro
    
    if (p == NULL) {   
    //se p for nulo significa que ela nao conseguiu alocar
    //a memoria, entao eu nao posso escrever. 
    return 1;
    }
    printf("%d\n", *p);
    
    free(p); // libera a memoria alocada

    return 0;

}
