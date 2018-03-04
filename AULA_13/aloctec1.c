#include <stdio.h>
#include <stdlib.h>

void *malloc_s(size_t size) {
    void *ptr; //declaro um ponteiro
    ptr = malloc(size);
    if (ptr == NULL) {
        fprintf(stderr, "Memoria insuficiente\n"); 
        // escrevendo direto ma saida de erro padrao
        exit(1); // sai do programa
    }
    return ptr;
}

int main(int argc, char *argv[]) {

    int *p;

    p = malloc_s(sizeof(int)); // aloca a memoria e o endereco vai pra "p"    
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
