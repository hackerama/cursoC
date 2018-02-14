#include <stdio.h>
#include <stdlib.h>

//Introducao Alocacao dinamica de memoria.

int main(int argc, char *argv[]) {
    
    int *j = NULL; //defini um ponteiro que nao aponta para nada;
    printf("Endereco de j aponta para: %p\n", j);
    
    // como j eh um ponteiro que nao aponta para lugar nenhum
    // se eu simplesmente tentar gravar um valor tipo *j = 9
    // nao vai compilar, pois nao ha memoria alocada. 
    // Para isso posso alocar um espaco de memoria para esta variavel

    j = malloc(sizeof (int)); //j = malloc(4) 
    // com isso alocamos 4 bytes (tamanho de um int32) para a
    // variavel/ponteiro j. e agora ela pode receber um inteiro

    *j = 9;

    printf("j definido direto no ponteiro: %d\n\n", *j);  
    free(j); // libera a memoria alocada
   
    return 0;

}
