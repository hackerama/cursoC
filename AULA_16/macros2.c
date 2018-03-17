//MACROS COMO FUNÇÔES

#include <stdio.h>

//Vai ser tipo uma funcao que calcula o quadrado
//Mas não é uma função pois será substituído no código. 
#define QUAD(x) (x*x) 

//Se x for maior que y, retorna x, do contario y.
#define MAX(x,y) (x > y ? : y)

//Complicando mais um pouco
#define MAX3(x,y,z) \  //contrabarra ignora caracter de nova linha
    (MAX(MAX(x,y), MAX(y,z)))

//agora criaremos uma funcao para comparar com a macro no GDB
int quad(int x) { return x*x; } //lindo uma funcao definida em uma linha

int main(void) {
    int x, y, z;

    printf("O quadrado de %d eh: %d\n", 8, QUAD(8)); //printando com a macro
    printf("O quadrado de %d eh: %d\n", 8, quad(8)); //printando com a funcao 

    printf("Digite o 1o numero: ");
    scanf("%d", &x);
    printf("Digite o 2o numero: ");
    scanf("%d", &y);
    printf("Digite o 3o numero: ");
    scanf("%d", &z);
    
    printf("O maior numero digitado eh %d", MAX3(x, y, z));
}

