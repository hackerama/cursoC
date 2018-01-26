#include <stdio.h>

// dica para ver o binario em assembly:
// objdump -dM intel if | less

int main(void) {

    int a = 359;
   
    if (a == -1 || a < 200) {
        int chave = 3;
        printf("chave: %d\n", chave);
    }

    else if (a == 359) {
        puts("Caiu no else if: a == 359");
    }

    else {
        printf("a avaliacao do if deu FALSE\n");
        // puts n aceita formatacao % e ja adiciona \n automaticamente      
        puts("Puts!deu false!");  
    }

    // if sem colocaf dentro de um bloco
    // vai condicionar somente a proxima linha
    int chave = 3;
    if (-1 == a && a < 400) printf("chave: %d\n", chave);
        printf ("oi\n"); //sempre vai ser printado independ. da condicional
    
    
    //Ternario - construcao ternaria       
    if (a == 3)
        puts("3");
    else
        puts("Nao sei o valor de a (sem ternario)");
    
    //agora construindo como ternario:
    //faz a comparacao  a == 3 
    //se sim (?)
    //se nao/do contrario (:)

    (a == 3) ? puts("3") : puts("Nao sei o valor de a (com ternario)");

            
    printf("a: %d\n", a);
    return 0;
}
