/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main() {
    int assentos[3][4] = {
        {1, 0, 1, 0},
        {0, 1, 1, 0},
        {1, 0, 0, 0}
    };

    int i, j;
    int ocupados = 0, disponiveis = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            if (assentos[i][j] == 1) {
                ocupados++;
            } else {
                disponiveis++;
            }
        }
    }

    printf("Assentos ocupados: %d\n", ocupados);
    printf("Assentos vazios: %d\n", disponiveis);

    return 0;
}





