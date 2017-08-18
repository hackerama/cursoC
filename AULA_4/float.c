#include <stdio.h>
#include <limits.h>
#include <stdint.h>

int main(void) {
  
    float f = 1; // float f = 3e2; // Notacao cientifica 3e2 = 3 *10^2 
    double d = 1; 
    long double ld = 1;
   
    printf("\nO tamanho de f (i) eh: %zu bytes/ %zu bits\n\n", sizeof f, sizeof f *8);
  
    printf("\nO tamanho de d (double) eh: %zu bytes/ %zu bits\n\n", sizeof d, sizeof d *8);
    printf("\nO tamanho de ld (long double) eh: %zu bytes/ %zu bits\n\n", sizeof ld, sizeof ld *8);
    printf("Valor de d: %f\n", f);
    
    return 0;
}
