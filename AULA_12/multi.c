#include <stdio.h>
#include <stdbool.h>

#define TAM 2 

//TABULEIRO
enum  pedras { BISPO=2, CAVALO, TORRE, RAINHA}; 
//associa numero inteiros em ordem pra essas strings

int main(int argc, char *argv[]) {

    int tabu[TAM][TAM] = {0};  
    // o 0 zera a array para que nao 
    //existam dados lixo gravados nela
 
  /*    
    tabu[0][0] = 2; //bispo
    tabu[0][1] = 3; //cavalo
    tabu[1][0] = 4; //torre
    tabu[1][1] = 5; //rainha
  */  
 
    *(*(tabu+0) + 0) = BISPO; //a indexacao da array eh feita dessa forma
    // E uma array dentro de uma array
    
    tabu[0][1] = CAVALO;
    tabu[1][0] = TORRE;
    *(*(tabu+1) + 1) = RAINHA;

    
    //supondo que estamos colocando uma peca na 
    //primeira casa do tabuleiro


    int i, j;

    or (i=0; i<TAM; i++) {
        for (j=0; j<TAM; j++) {
            printf("[%d][%d]=%d ", i, j, tabu[i][j]);
        if (j == TAM -1)
            putchar('\n');
        }
    }


    return 0;

}
