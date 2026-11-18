/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;

int main() {
    FILE *arquivo;
    Funcionario f;
    int i;

    arquivo = fopen("funcionarios.txt", "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        printf("\nFuncionario %d\n", i + 1);

        printf("Nome: ");
        scanf(" %49[^\n]", f.nome);

        printf("Salario: ");
        scanf("%f", &f.salario);

        printf("Horas extras: ");
        scanf("%d", &f.horasExtras);

        fprintf(arquivo, "%s %.2f %d\n",
                f.nome, f.salario, f.horasExtras);
    }

    fclose(arquivo);

    arquivo = fopen("funcionarios.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao ler o arquivo!");
        return 1;
    }

    printf("\n=== FUNCIONARIOS CADASTRADOS ===\n");

    while (fscanf(arquivo, " %49[^0-9]", f.nome) == 1) {
        break;
    }

    fclose(arquivo);

    arquivo = fopen("funcionarios.txt", "r");

    while (fscanf(arquivo, "%49s %f %d",
                  f.nome, &f.salario, &f.horasExtras) == 3) {

        printf("\nNome: %s\n", f.nome);
        printf("Salario: %.2f\n", f.salario);
        printf("Horas extras: %d\n", f.horasExtras);
    }

    fclose(arquivo);

    return 0;
}




