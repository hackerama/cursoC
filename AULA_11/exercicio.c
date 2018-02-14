#include <stdio.h>

// exercicio do curso do Peterson Lobato
// https://www.youtube.com/watch?v=LUyI249exKw

int calcula(int a, int b, int *pontSoma, int *pontMult);

main() {
    int a, b;
    int soma;
    int mult;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    
    printf("Resultado do return: %d\n", calcula(a,b, &soma, &mult));
  
    int getchar();
    getchar();
     
}


int calcula(int a, int b, int *pontSoma, int *pontMult) {
    
    *pontSoma = a + b;
    *pontMult = a * b;
    
    printf("Soma dos dois numero: %d\n", *pontSoma);
    printf("multiplicacao dos dois numero: %d\n", *pontMult);
   
    if ((a + b < -33767) || ( a + b > 33767) || (a * b < -33767) || ( a * b > 33767))
        return -1;
    else if (a == b)
        return 1;
    else 
        return 0;
}
/*
 * *pontSoma >>> recebe endereço de soma (&soma)
 * *pontMult >>> recebe o endereço de mult (&mult)
 *
 * portanto, a funçao calcula espera 4 argumentos:
 *
 * (
 * int a,  
 * int b, 
 * *pontSoma, 
 * *pontMult
 * )
 *
 * e recebe:
 *
 * (
 * int a, 
 * int b,
 * &soma,
 * &mult
 * )
 *
 * portanto:
 * 1 - recebe a variavel a da função main;
 * 2 - recebe a varável b da função main;
 * 3 - *pontSoma = &soma
 * 4 - *pontMult = &mult
 *
 * Atribuí então a operação a cada ponteiro como conteúdo da variavel:
 * *pontSoma = a + b
 * *pontMult = a * b
 *
 * *E imprimi.
 */
