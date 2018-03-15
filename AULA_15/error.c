#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// strace ./error // No Bash: Faz um trace das chamadas que um programa fez
void errorr(ano) {
    if (ano < 1900 || ano > 2008) {
       printf("Voce digitou uma data em formato invalido\n");
       exit(1);
    }
    return ano; 
}

int main(void) {

    int data; 
    
    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &data); 
    errorr(data);
    printf("Data de Nascimento: %d\n", data);


    return 0;
}
