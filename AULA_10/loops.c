#include <stdio.h>
#include <stdbool.h>
// dica para ver o binario em assembly:
// objdump -dM intel if | less
// objdump -dM intel loops | grep -A 20 '<main>:'

int main(void) {

//    unsigned int i;

/*   Sem a utilizacao do loop;
 *
 *   printf("O valor de i eh: %u\n", i);
 *   i++;
 *   printf("O valor de i eh: %u\n", i);
 *   i++;
 *   printf("O valor de i eh: %u\n", i);
 *   i++;
 */

/*  Criando um label, com goto;
 * label:
 * printf("O valor de i eh: %u\n", i);
 * i++;
 * if (i<3)
 * goto label;
 */  

    
            // o unsigned tem um int implicito
    for (unsigned i=0;i<3;i++) 
        printf("O valor de i eh: %u\n", i);
    

    unsigned int it = 0;
    while(it < 3){
        printf("O valor de i eh: %u\n", it);
        it++;
    }
    
    unsigned int iter = 0;
    do 
        printf("O valor de i eh: %u\n", iter++);
    while (iter < 3);

    return 0;
}
