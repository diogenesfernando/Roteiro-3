#include <stdio.h>
#include <string.h>

int main(){
	char nome[100];

	printf("Digite uma palavra: ");
	scanf("%s", nome);

	int i, j = strlen(nome)-1;
	

	for(i=0; nome[i] != '\0'; i++, j--){
		if(nome[i] == nome[j]){
			printf("%c == %c\n", nome[i], nome[j]);
		}
	}
		

	return 0;
}

