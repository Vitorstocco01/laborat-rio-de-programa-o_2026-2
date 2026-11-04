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
    char curso[10];
    char copia[50];
    char mensagem[100];

    printf("Digite o primeiro nome do estudante: ");
    scanf("%s", nome);

    printf("Digite o codigo do curso (CC ou SI): ");
    scanf("%s", curso);

    strcpy(copia, nome);

    printf("\n--- DADOS DO ESTUDANTE ---\n");

    printf("Nome: %s\n", nome);
    printf("Quantidade de caracteres: %d\n", strlen(nome));

    if (strcmp(curso, "CC") == 0) {
        printf("Curso: Ciencia da Computacao\n");
    }
    else if (strcmp(curso, "SI") == 0) {
        printf("Curso: Sistemas de Informacao\n");
    }
    else {
        printf("Codigo de curso invalido!\n");
        return 0;
    }

    strcpy(mensagem, "Ola, ");
    strcat(mensagem, copia);
    strcat(mensagem, "!");

    printf("Mensagem: %s\n", mensagem);

    return 0;
}

