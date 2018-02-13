#include <stdio.h>
#include <stdbool.h>


int imprime(char *s) {
    while (*s != '\0')
        putchar(*s++); // imprime o ponteiro s e ja incrementa;
}

void main(void) {
    
    char u[] = {0x63, 0x61, 0x72, 0x6c, 0x6f, 0x73, 0x0a};    
    imprime(u);

    return 0;

}
