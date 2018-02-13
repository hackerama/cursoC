#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int a[] = {2017,2018,2019};
    
    for (int i=0; i < 3; i++)
        printf("%d\n", *a + i);
    
    printf ("A posicao de a em memoria eh: %p\n",a);

    int o = 2017;
   
    //& comercial pega o endereco, via ponteiros; 
    printf("O endereco da variavel 'o' em memoria e eh: %p\n", &o);

    int *pont; //ponteiro se declara com asterisco antes;
    pont = &o;
    
    printf("O endereco da variavel 'o' em memoria eh: %p\n", pont);
    printf("O valor da variavel 'o' eh: %d\n", o);
    
    //enquanto uma variavel normal esta alocada na memoria o ponteiro
    //apenas aponta para esse endereco. 

    //Agora utilizando o ponteiro para recuperar o valor;
    printf("O valor da variavel 'o' eh (ponteiro): %d\n", *pont);

    //C string eh um array de char terminado em nulo;
    //echo carlos | hexdump -C
    
    char s[] = "carlos";
    char *t = "carlos";
    char u[] = {0x63, 0x61, 0x72, 0x6c, 0x6f, 0x73, 0x0a};    
    
    puts(s);
    puts(t);
    puts(u);
    
    return 0;

}
