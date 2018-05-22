#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void fatal(char *msg) { 
    fprintf(stderr, "%s\n", msg);
    exit(1); 
}

void usage(void) { 
    printf("USO:\n\treadpe <arquivo.exe>\n");
    exit(1); 
}

bool ispe(const unsigned char *b) {
    return(b[0] != 'M' && b[1] != 'Z'); // 'M' == 0x4d e o 'Z' == 0x5a
    
    //automaticamente já vai dizer se é false ou true

    /*
        return true;
    return false; 
    */
}

int main(int argc, char *argv[]) { 
    FILE *fh;
    unsigned char buffer[32];

    if (argc != 2) 
        usage();

    fh = fopen(argv[1], "rb");

    if (fh == NULL)
        fatal("ERRO: Arquivo não encontrado ou sem permissão de leitura");
    
    if (fread(buffer, 32, 1, fh) != 1)
        fatal("Não consegui ler os 32 bytes do arquivo.");
    fclose(fh);

    if (ispe(buffer))
        fatal("Arquivo não parece ser um PE");
        
    return 0;
}

