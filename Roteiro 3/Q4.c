#include <stdio.h>
#include <string.h>

typedef struct{
	char nome[30];
	char endereco[50];
	char matricula[10];
	char curso[30];
}tAluno;

tAluno gAlunos[100];

int main(){
	char *curso;
	int n, i;

	printf("Digite a quantidade de cadastros: \n");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		printf("***Aluno #%d***\n"
			"Nome: \n"
			"Endereco: \n"
			"Matricula: \n"
			"Curso: \n", i+1);
		scanf("%s %s %s %s*c", gAlunos[i].nome, gAlunos[i].endereco, gAlunos[i].matricula, gAlunos[i].curso);
	}

	return 0;
}

unsigned int ConsultaAlunosPorCurso(char *curso){
		int i, cont=0;
		for(i=0; i < strlen(gAlunos); i++){
			if(strcmp(curso, gAlunos[i].curso) == 0){
				++cont;
			}
		}
		return cont;
}
