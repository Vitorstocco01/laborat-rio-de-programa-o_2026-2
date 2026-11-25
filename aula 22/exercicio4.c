/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/



#include <stdio.h>

void dobrar(int *numero) {
    *numero = *numero * 2;
}

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    dobrar(&numero);

    printf("Resultado: %d\n", numero);

    return 0;
}




