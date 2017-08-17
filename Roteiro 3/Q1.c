#include <stdio.h>
#include <string.h>

int main(){
	char nome[100];
	int i;
	
	printf("Diga o nome: ");
	scanf("%s", nome);

	for(i=0; i < strlen(nome); i++){
		printf("%c\n", nome[i]);	
	}

	return 0;
}
