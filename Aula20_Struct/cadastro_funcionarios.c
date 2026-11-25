/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} Funcionario;

int main() {
    Funcionario funcionario1, funcionario2;
    float diferenca;

    printf("Digite o nome do primeiro funcionario: ");
    scanf(" %[^\n]", funcionario1.nome);

    printf("Digite a idade: ");
    scanf("%d", &funcionario1.idade);

    printf("Digite o salario: ");
    scanf("%f", &funcionario1.salario);

    printf("\nDigite o nome do segundo funcionario: ");
    scanf(" %[^\n]", funcionario2.nome);

    printf("Digite a idade: ");
    scanf("%d", &funcionario2.idade);

    printf("Digite o salario: ");
    scanf("%f", &funcionario2.salario);

    printf("\n--- Dados dos Funcionarios ---\n");

    printf("\nFuncionario 1: %s\n", funcionario1.nome);
    printf("Idade: %d\n", funcionario1.idade);
    printf("Salario: R$ %.2f\n", funcionario1.salario);

    printf("\nFuncionario 2: %s\n", funcionario2.nome);
    printf("Idade: %d\n", funcionario2.idade);
    printf("Salario: R$ %.2f\n", funcionario2.salario);

    if (funcionario1.salario > funcionario2.salario) {
        diferenca = funcionario1.salario - funcionario2.salario;

        printf("\nMaior salario: %s\n", funcionario1.nome);
        printf("Diferenca salarial: R$ %.2f\n", diferenca);

    } else if (funcionario2.salario > funcionario1.salario) {
        diferenca = funcionario2.salario - funcionario1.salario;

        printf("\nMaior salario: %s\n", funcionario2.nome);
        printf("Diferenca salarial: R$ %.2f\n", diferenca);

    } else {
        printf("\nOs dois funcionarios recebem o mesmo salario.\n");
    }

    return 0;
}









