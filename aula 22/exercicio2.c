/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main() {
    int numero = 20;
    int *ponteiro = &numero;

    printf("Valor da variavel: %d\n", numero);
    printf("Endereco de memoria: %p\n", (void*)ponteiro);
    printf("Valor pelo ponteiro: %d\n", *ponteiro);

    return 0;
}


