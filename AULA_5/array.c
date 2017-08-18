#include <stdio.h>
#include <limits.h>
#include <stdint.h>

int main(void) {
     long int c[3]; 
     
     c[0] = 'A';
     c[1] = 0x42;
     c[2] = 67;

     printf("O tamanho de c eh: %zu\n", sizeof c);
     printf("O numero de elementos de c eh: %zu\n", sizeof c / sizeof(char)); // pode dividir tb por sizeof [c0]
     
     printf("O primeiro elemento de C eh: %c\n", c[0]);
     printf("O segundo elemento de C eh: %c\n", c[1]);
     printf("O terceiro elemento de C eh: %c\n", c[2]);
     printf("O sexto elemento de C eh: %c\n", c[5]); // elemento inexistente, le memoria adjacente.

     printf("O endereco de c em memoria eh: %p\n", c);
     printf("O endereco de &c em memoria eh: %p\n", &c);
     printf("O endereco de do primeiro elemento de c em memoria eh: %p\n", &c[1]);
     printf("O endereco do quarto elemento de c em memoria eh: %p\n", &c[3]); // elemento inexistente, ele le memoria adjacente
   return 0;

}
