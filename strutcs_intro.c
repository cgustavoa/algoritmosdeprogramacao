#include <stdio.h>

struct aluno {
    char nome[50];
    int matricula;
    float nota1, nota2, nota3;
    char endereco[50];
};

int main(){
    struct aluno aluno1;

    printf("Insira dados do aluno:\n");
    printf("Nome: ");
    fgets(aluno1.nome, 50, stdin);

    printf("Matricula: ");
    scanf("%d", &aluno1.matricula);

    printf("Notas: ");
    scanf("%f %f %f", &aluno1.nota1, &aluno1.nota2, &aluno1.nota3);

    printf("Informacoes do aluno:\n");
    printf("Nome: %smatricula: %d\nnotas: %f %f %f\n", aluno1.nome, aluno1.matricula, aluno1.nota1, aluno1.nota2, aluno1.nota3);



    return 0;
}