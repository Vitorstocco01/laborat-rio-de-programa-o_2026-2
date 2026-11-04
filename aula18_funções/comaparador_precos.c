/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

float maiorPreco(float p1, float p2) {
    if (p1 > p2) {
        return p1;
    } else {
        return p2;
    }
}

int main() {
    float preco1, preco2, maior;

    printf("Digite o preco do primeiro produto: ");
    scanf("%f", &preco1);

    printf("Digite o preco do segundo produto: ");
    scanf("%f", &preco2);

    if (preco1 == preco2) {
        printf("Os precos sao iguais!\n");
    } else {
        maior = maiorPreco(preco1, preco2);
        printf("O maior preco e: R$ %.2f\n", maior);
    }

    return 0;
}
