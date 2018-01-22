#include <stdio.h>

//Operadores bit a bit (bitwise)

/* & (AND) - verdadeiro se as duas entradas forem verdadeiras
 * | (OR) - verdadeiro se uma das duas entradas forem verdadeiras
 * ^ (XOR) exclusive OR - true se apenas um dos bits na for true na oper.
 * ~ (NEGACAO) - Nega cada bit
 * << (SHIFT LEFT) - Pega os digitos, move pra esq e add um 0 a dir.(*10) 
 * >> (SHIFT RIGHT) - Pega os digitos move pra dir e add um 0 a esq.(/10)
*/

int main(void) {
    
                 // AND   OR   XOR 
    int a = 2;   // 10    10   10
    int b = 3;   // 11    11   11
                 // 10    11   01
    //0 falso
    //qualquer coisa diferente de 0 eh verdadeiro

    printf("[+] Resultado (AND): %d\n", a & b); //AND
    printf("[+] Resultado (OR): %d\n", a | b); //OR
    printf("[+] Resultado (XOR): %d\n", a ^ b); //xOR
    

    //Exemplo de negacao:

    int c = 0b00000000000000000000000000000000;
    int d = 0b11111111111111111111111111111111;

    printf("[+] Resultado c : %d\n", ~c); 
    printf("[+] Resultado d : %d\n", d); 


    //Shift left and shift right
    
    int e = 123;
    int f = 0b1000; // decimal 8, empurrado pra esq: 10000    

    printf("[+] Resultado e : %d\n", e * 10); 
    printf("[+] Resultado f (SHIFT LEFT) : %d\n", f << 1); 
    printf("[+] Resultado f (SHIFT RIGHT) : %d\n", f >> 1); 
    
    return 0;
}
