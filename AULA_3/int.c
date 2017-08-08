#include <stdio.h>
#include <limits.h>
#include <stdint.h>

int main(void) {
    long i = LONG_MAX;      //funciona apenas arquitetura 64b
                            // short int i; # retorna o tam max em 32b
                            //uint32_t i = UINT_MAX; #retorna tam max 32b
                            //uint16_t i = USHRT_MAX #retorna tam max 16b
                            //uint8_t i = UCHAR_MAX #retorna tam max 16b
                            // size_t i = 0 #retorna o o tamanho de um inteiro

    printf("\nO tamanho de i (i) eh: %zu bytes/ %zu bits\n\n", sizeof i, sizeof i *8);
    printf("Valor de i: %lu\n", i);
    return 0;
}
