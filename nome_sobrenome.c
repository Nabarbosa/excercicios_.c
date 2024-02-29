#include <stdio.h>

int main(){
	
	char nome[200];
	int idade;
	
	printf("Digite seu nome: ");
	//scanf("%s",&nome);
	//gets(nome);
	fgets(nome, 200, stdin);
	
	printf("digite sua idade: ");
	scanf("%i",&idade);
	
	printf("\nNome: %s \n", nome);
	printf("\nIdade: %i \n", idade);
	
	return 0;
}
