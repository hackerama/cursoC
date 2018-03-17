include <stdio.h>
#include "f.h"

#define MSG "Mensagem Padrão de ERRO\n" 
#define SIZ 16 

int main(void) {
    
    char buff[SIZ] = {'\0'}; //inicializar o buffer com 0

    printf("Digite algo: ");
    scanf("%s", &buff); 
    printf("Você digitou: %s\n", buff);

    imprime("oie");
    printf(MSG);
    return 0;
}
