#include <stdio.h>
#include <stdbool.h>


int main(int argc, char *argv[]) {

    int i; // 4 bytes alocados para um int32

    printf("Endereco de i: %p\nTamanho de i: %zu\n\n", &i, sizeof i);

    int *p = NULL; 
    // define como null para que o conteudo n aponte para um dado qualquer. 
    
    printf("Endereco de p: %p\nTamanho de p: %zu\n\n", &p, sizeof p);

    printf("Conteudo de p (primeiro momento): %p\n\n", p);
    printf("p - &i;\n\n");
    p = &i;
    //estou dizendo que o ponteiro p esta apontando para o endereco de i;

    printf("Conteudo de p (segundo momento): %p\n\n", p);

    i = 9; 
        // uma vez que mexo na variavel 'i', o 'p', que contem 
        // o endereco de i passa a apontar para a a variavel i.
        // Entao podemos resolver o p, utilizando o "*":

    printf("variavel i: %d\n", i);
    printf("p RESOLVIDO apontando para i: %d\n", *p);

    return 0;

}
