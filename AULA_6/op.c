#include <stdio.h>
#include <limits.h>
#include <stdint.h>

/*
 *  = operador de atribuicao
 *  + - operadores unarios (-10, +5) numeros inteiros
 *  + - binarios (adicao e subtracao) (10 + 5)
 *  * / binarios (multiplicacao e divisao) ( 10 * 5)
 *  % (resto da divisao)
 *  ++ (incremento)
 *  -- (decremento)
 */ 

int main(void) {
    int a;
    float b;
    int c;
    int d;
    int e;

    a = 2 + 10;         // adicao
    b = 10 / 3.0f;      // divisao float
    c = 3;              // incremento
    d = 10 % 3;         // resto da divisao

    // operadores de incremento, as tres formas abaixo sao equivalentes
    c = c + 1;    
    c += 1;
    c++;

    // prioridades, seguem as mesmas regras da matematica
    
    e = 4 + 2 * 3;   // primeiro resolve multiplicacao = 10
    printf("%d\n", e);

    e = (4 + 2) * 3;  // mudei a prioridade usando os parenteses = 18
    printf("%d\n", e);
   
    
    //pre e pos incremento

    printf("%d\n", e++); 
    //impr. 18 pois numa expressao primeiro resolve a exp. depois incrementa    
    printf("%d\n", ++e);
    // agora sim, primeiro incrementa, depois imprime 
 
 
    printf("%d\n", a * 10);
    printf("%d\n", a);
    printf("%f\n", b);
    printf("%d\n", c);
    printf("%d\n", d);

   return 0;

}
