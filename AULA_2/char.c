#include <stdio.h>

int main(void) {
    char c;

    printf("\nO tamanho de c (char) eh: %lu bytes/ %lu bits\n\n", sizeof c, sizeof c *8);
    
    c = 10; //decimal
    c = 0xa; //hexadecimal
    c = "\n" //ASCII
    c = 127;
    
    printf("Valor de c: %i\n", c);
    return 0;
}
