#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool b;
    char c;
   // c = 0; // falso
   // c = 1; // verdadeiro
    
    // b = false; //boolean notacao moderna
   
    b = false; //booleen notacao moderna

    printf("O tamanho de b (bool) eh %lu\n", sizeof b);

    printf("O valor de b eh: %i\n", b);
    return 0;
}
