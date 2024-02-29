#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void cabecalho(){
	system("cls || clear");
	printf("\n=== SENAI ===\n");
	fflush(stdin);
}
int main(){
	setlocale(LC_ALL,"");
	char login[200], senha[200];
	char loginCadastrado[200] = "Marta", senhaCadastrada[200] = "123";
	
	cabecalho();
	printf("Insira o Login: ");
	scanf("%s",&login);
	
	cabecalho();
	printf("Digite a senha: ");
	scanf("%s",&senha);
	
	cabecalho();
	//if (login == loginCadastrado && senha == senhaCadastrada){
	if (strcmp(login, loginCadastrado) == 0 && strcmp(senha, senhaCadastrada) == 0) {
		printf("\n=== BEM-VINDO(A) ===\n");
		
	} else {
		printf("\n=== LOGIN OU SENHA IVÁLIDOS ===\n");
	}
	
	return 0;
}
