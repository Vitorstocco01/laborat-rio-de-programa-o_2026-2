/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

void exibirMenu() {
    printf("\n--- CALCULADORA ---\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");
}

float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    return a / b;
}

int main() {
    int opcao;
    float n1, n2, resultado;

    do {
        exibirMenu();
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite dois numeros: ");
            scanf("%f %f", &n1, &n2);
        }

        switch (opcao) {
            case 1:
                resultado = somar(n1, n2);
                printf("Resultado: %.2f\n", resultado);
                break;

            case 2:
                resultado = subtrair(n1, n2);
                printf("Resultado: %.2f\n", resultado);
                break;

            case 3:
                resultado = multiplicar(n1, n2);
                printf("Resultado: %.2f\n", resultado);
                break;

            case 4:
                if (n2 == 0) {
                    printf("Erro: divisao por zero!\n");
                } else {
                    resultado = dividir(n1, n2);
                    printf("Resultado: %.2f\n", resultado);
                }
                break;

            case 0:
                printf("Calculadora encerrada!\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}

