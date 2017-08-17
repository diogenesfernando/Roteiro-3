#include <stdio.h>
#include <string.h>

int main(){
	char nome[100];
	int i, j;
	
	printf("Diga o nome: ");
	scanf("%s", nome);

	for(i=0; i < strlen(nome); i++){
		for(j=0; j <= i; j++){
			printf("%c ", nome[j]);
		}
		puts("");	
	}

	return 0;
}
