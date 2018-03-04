#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// cria uma estrutura. Estrutura é uma variavel que 
// tem dentro dela definidas várias variáveis. 

union st {
    unsigned char id;
    unsigned int numero;
};

int main(void) {
    union st s;
    // no union devo usar ou um ou outro
    // se eu usar o "numero" nao posso definir o id
    // porque se compartilha o mesmo pedaço de memoria
    s.numero = 42;
    

    printf("s.id: %d\n", s.id);
    printf("s.numero: %d\n", s.numero);
    printf("sizeof(strct st): %d\n", sizeof(union st));
    return 0;

}
