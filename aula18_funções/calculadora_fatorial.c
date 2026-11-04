/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int calcularFatorial(int numero) {
    int fatorial = 1;

    for (int i = 1; i <= numero; i++) {
        fatorial = fatorial * i;
    }

    return fatorial;
}

int main() {
    int numero, resultado;

    printf("Digite um numero entre 0 e 12: ");
    scanf("%d", &numero);

    if (numero >= 0 && numero <= 12) {
        resultado = calcularFatorial(numero);

        printf("Fatorial de %d = %d\n", numero, resultado);
    } else {
        printf("Numero invalido!\n");
    }

    return 0;
}
