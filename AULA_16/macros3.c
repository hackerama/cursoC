//MACROS PRE CARREGADAS NO COMPILADOR

#include <stdio.h>

#define DEBUG
//#undef DEBUG
int main(void) {
    
    //Esta macro predefinida imprime o numero da linha onde esta o codigo
    printf("%d\n", __LINE__); 
    printf("%d\n", __LINE__);

//damos uma nova diretiva pra o pre-compilador
//Ele pergunta se DEBUG esta definido e executa o metodo

#ifdef DEBUG
    printf("%s :: %s :: Estou na linha %d\n",__DATE__, __TIME__, __LINE__);
#endif    

    return 0;
}

