#include <stdio.h>
#include <stdbool.h>

// Ponteiros de array de Char
// Dica eh possivel usar o sed no vi
// :8,30s/29/10/ (da linha 8 ate a 30 substituir 20 por 10)

int main(int argc, char *argv[]) {

    char s[10] = "Carlos";
    
    //for (int i=0; i<50; i++) 
    //// imprime outras regioes da memoria.
    
    printf("%x\n", s[23]);
    printf("%x\n", *(s+23));//esta e a traducao que o compilador faz da anterior
    //O ponteiro *(s+23) aponta para a primeira string da array
    //e recupera a vigesima nona.

    putchar('\n');

    return 0;

}
