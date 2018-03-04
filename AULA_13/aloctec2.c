#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//definindo uma macro

#define MALLOC(ptr, size) { \
    ptr = malloc(size); \
    if (ptr == NULL) { \
        fprintf(stderr, "Memoria insuficiente\n"); \
        exit(1); \
    } \
}

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

    int *p, i;
    
    //Posso tambem alocar espaco para um array de inteiros
    MALLOC(p, 5 * sizeof(int)); //utilizando a macro definida 
    memset(p, 0, 5 * sizeof(int)); //inicializa a memoria
    // escrevo em p o umeor de 0s de size of int

    //p = malloc_s(sizeof(int)); // aloca a memoria e o endereco vai pra "p"    
    *p = 42; // altero o conteudo do ponteiro
    *(p+1) = 73;
    *(p+2) = 37;
    *(p+3) = 49;
    *(p+4) = 3;

    if (p == NULL) {   
    //se p for nulo significa que ela nao conseguiu alocar
    //a memoria, entao eu nao posso escrever. 
    return 1;
    }
    
    for (i=0; i<5; i++)
    printf("%d\n", *(p+i));
    
    free(p); // libera a memoria alocada

    return 0;

}
