#include <stdio.h>

int main(void) {
    unsigned char c;

    printf("\nO tamanho de c (char) eh: %lu bytes/ %lu bits\n\n", sizeof c, sizeof c *8);
    
    c = 255; 
    printf("Valor de c: %i\n", c);
    return 0;
}
