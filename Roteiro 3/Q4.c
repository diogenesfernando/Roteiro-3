#include <stdio.h>
#include <string.h>

typedef struct{
	char nome[30];
	char endereco[50];
	char matricula[10];
	char curso[30];
}tAluno;

tAluno gAlunos[100];

unsigned int ConsultaAlunos(char *curso){
		int i, cont=0;
		for(i=0; curso[i] != '\0'; i++){
			if(strcmp(curso, gAlunos[i].curso) == 0){
				++cont;
			}
		}
		return cont;
}

int main(){
	char consulta[30];
	int n, i, x;

	printf("Digite a quantidade de cadastros: \n");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		printf("***Aluno #%d***\n"
			"Nome: ", i+1);
		scanf("%s", gAlunos[i].nome);
		printf("Endereco: ");
		scanf("%s", gAlunos[i].endereco); 
		printf("Matricula: ");
		scanf("%s", gAlunos[i].matricula);
		printf("Curso: ");
		scanf("%s*c", gAlunos[i].curso);
	}

	printf("Consulte os cadastros, digite o nome do curso: ");
	scanf("%s", consulta);

	x = ConsultaAlunos(consulta);
	
	printf("Numeros de cadastros: %d\n", x);
	return 0;
}


