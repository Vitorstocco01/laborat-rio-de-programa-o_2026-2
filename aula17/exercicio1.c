/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    char categoria[20];
    char copia[50];
    char descricao[100];

    printf("Digite o nome do produto: ");
    scanf(" %[^\n]", nome);

    printf("Digite a categoria (HARDWARE ou PERIFERICO): ");
    scanf("%s", categoria);

    strcpy(copia, nome);

    printf("\n--- RESUMO DO CADASTRO ---\n");

    printf("Nome do produto: %s\n", nome);
    printf("Quantidade de caracteres: %d\n", strlen(nome));

    if (strcmp(categoria, "HARDWARE") == 0) {
        printf("Categoria: Hardware\n");
    }
    else if (strcmp(categoria, "PERIFERICO") == 0) {
        printf("Categoria: Periferico\n");
    }
    else {
        printf("Categoria invalida!\n");
        return 0;
    }

    strcpy(descricao, "Produto: ");
    strcat(descricao, copia);

    printf("Descricao: %s\n", descricao);

    return 0;
}

