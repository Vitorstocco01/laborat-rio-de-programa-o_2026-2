/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int dobro(int quantidade) {
    return quantidade * 2;
}

int main() {
    int quantidade, final;

    printf("Digite a quantidade inicial: ");
    scanf("%d", &quantidade);

    final = dobro(quantidade);

    printf("Quantidade inicial: %d\n", quantidade);
    printf("Quantidade final: %d\n", final);

    return 0;
}

