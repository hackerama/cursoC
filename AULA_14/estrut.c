#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// cria uma estrutura. Estrutura é uma variavel que 
// tem dentro dela definidas várias variáveis. 

struct st {
    unsigned char id[5];
    unsigned int numero;
};

int main(void) {
    struct st s;

    //Como o memset funciona: 
    //arg1 = ponteiro (endereco)  para onde vamos escrever
    //arg2 = O que vamos escrever
    //arg3 = O tamanho em bytes do que vamos escrever
    memset(&s, 0, sizeof(struct st));
    
    s.id[2] = 0x41;
    s.id[3] = 0x90;
    s.numero = 42;
    

    printf("s.id: %d\n", s.id);
    printf("s.numero: %d\n", s.numero);
    printf("sizeof(strct st): %d\n", sizeof(struct st));
    return 0;

}
