#include <stdio.h>

/*
 * Conjuncao (E, AND) - Precisa atender as duas condicoes
 * 
 * TABELA DA VERDADE:
 * 0 0 - Falso - 0
 * 0 1 - Falso - 0 
 * 1 0 - Falso - 0 
 * 1 1 - Verdadeiro - 1
*/

/*
 * Disjuncao (OU, OR) - Precisa atender apenas uma condicao
 * 
 * TABELA DA VERDADE:
 * 0 0 - Falso - 0
 * 0 1 - Verdadeiro - 0 
 * 1 0 - Verdadeiro - 0 
 * 1 1 - Verdadeiro - 1
*/


int main(void) {
    int a = 8;
    int b = 9;
    int c = 8;

    printf("%d\n", a == b);     //vai printar 0 - falso
    printf("%d\n", a == c);     //vai printar 1 - verdadeiro

    
    // usando a conjuncao AND (&&), sao duas condicoes para true:
    
    printf("%d\n", a == c && a > 5);  //vai printar 1 - verdadeiro
    printf("%d\n", a == c && a < 5);  //vai printar 0 - falso    
    
    // usando a disjuncao OR (||), atendendo uma ou outra eh true

    printf("%d\n", a == c || a < 5);  //vai printar 1 - verdadeiro
    printf("%d\n", a == b || a > 5 && a == c);  //vai printar 1 - verdadeiro
    printf("%d\n", a == b || a > 5 && a == 30);  //vai printar 0 - falso
        
    // negar uma avaliacao (!)
    
    printf("%d\n", !(a == b));                 //vai printar 1 - verdadeiro
    printf("%d\n", !(a == b) && !(a != c));     //vai printar 1 - verdadeiro
    return 0;
    

}
