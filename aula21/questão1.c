/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main() {
    FILE *arquivo;
    int numeros, i;

    arquivo = fopen("numeros.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros);

        fprintf(arquivo, "%d\n", numeros);
    }

    fclose(arquivo);

    arquivo = fopen("numeros.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao ler o arquivo!");
        return 1;
    }

    printf("\nNumeros armazenados:\n");

    while (fscanf(arquivo, "%d", &numeros) == 1) {
        printf("%d\n", numeros);
    }

    fclose(arquivo);

    return 0;
}


