#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prototipo de uma funcao:
// tipo_retorno nome(tipo_argumento nome_arg, tipo_arg2, nome_arg2)

int saudacao(void) {
    printf("Iniciando o programa de calculos\n\n");
    // exit(0) // da lib stdlib, sai do programa;
    return 0;
}

int soma(int n1, int n2, int n3) {
    int res;
    res = n1 + n2 + n3;
    return res;
} 


int main(void) {
    int num1, num2, num3;

    saudacao();

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);  //Escaneia um numero e envia para a variavel
                         //informando o endereco
    printf("num1: %d\n", num1);

    printf("Digite o primeiro numero: ");
    scanf("%d", &num2); 
    printf("num2: %d\n", num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3); 
    printf("num3: %d\n", num3);

    //printf("soma: %d\n", num1+num2+num3);
    printf("soma: %d\n", soma(num1,num2,num3));

    return 0;
}
