#include <stdio.h>
#include <stdbool.h>

//*envp[] --> Pode-se capturar tambem as variaves de ambiente,
//que estao numa segunda array na execucao.

int main(int argc, char *argv[], char *envp[]) {
    int i;

    for(i=0; i < argc; i++)
        puts(argv[i]);


    return 0;

}
