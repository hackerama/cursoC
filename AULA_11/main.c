#include <stdio.h>
#include <stdbool.h>


//argc --> Numero de argumentos passados na execucao do programa
//*argv[] ponteiro que aponta para a array de argumentos, sendo que
//o primeiro objeto da array eh sempre o proprio programa.

int main(int argc, char *argv[]) {
    printf("Numero de argumentos: %d\n", argc);    
    puts(argv[1]);

    return 0;

}
