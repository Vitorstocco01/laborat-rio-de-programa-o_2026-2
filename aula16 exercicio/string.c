/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


#include <stdio.h>

int main() {
    char palavra[100];
    int i, contador = 0;

    printf("Digite uma palavra: ");
    scanf("%99s", palavra);

    for (i = 0; palavra[i] != '\0'; i++) {
        contador++;
    }

    printf("Quantidade de letras: %d\n", contador);

    return 0;
}






