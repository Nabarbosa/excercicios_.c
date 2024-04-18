/*
Crie um programa em C que solicite ao usu�rio:
- Nome
- Idade
- E-mail
- Telefone

Usando o switch-case, mostre o menu abaixo e utilizando fun��es mostre para o usu�rio os dados solicitados conforme a op��o desejada:

1 - Mostrar nome e idade;
2 - Mostrar nome e e-mail;
3 - Mostrar nome e telefone;
4 - Mostrar todas as informa��es;
0 - Sair do programa.

Caso o usu�rio informe um n�mero que n�o esteja no menu acima, siga os seguintes passo:
- Ser� exibida a mensagem: "Op��o incorreta, tente novamente."
- Limpe a tela e mostre o menu novamente para o usu�rio.

Para sair do programa, o usu�rio deve digitar o n�mero zero, caso contr�rio, o menu deve ser exibido novamente.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

#define CARACTER 200

int main() {
	setlocale(LC_ALL,"");
	
	char nome[CARACTER], email[CARACTER];
	int idade, telefone, opcao;
	
	printf("Digite o nome: ");
	scanf("%s",&nome);
	
	printf("Digite a idade: ");
	scanf("%i",&idade);
	
	printf("Digite o e-mail: ");
	scanf("%s",&email);
	
	printf("Digite o telefone: ");
	scanf("%i",&telefone);
	
	do {
			printf("\n");
			printf("\n1 - Mostrar nome e idade");
			printf("\n2 - Mostrar nome e e-mail");
			printf("\n3 - Mostrar nome e telefone");
			printf("\n4 - Mostrar todas as informa��es");
			printf("\n0 - Sair do programa");
			printf("\n");
			printf("\nDigite a op��o desejada: ");
			scanf("%i",&opcao);
			printf("\n");
			
			switch(opcao) {
				case 1:
					printf("\nNome inserido: %s", nome);
					printf("\nIdade inserida: %i", idade);
					break;
				
				case 2:
					printf("\nNome inserido: %s", nome);
					printf("\nE-mail inserido: %s", email);
					break;
					
				case 3:
					printf("\nNome inserido: %s", nome);
					printf("\nTelefone inserido: %i", telefone);
					break;
					
				case 4:
					printf("\nNome inserido: %s", nome);
					printf("\nIdade inserido: %i", idade);
					printf("\nE-mail inserido: %s", email);
					printf("\nTelefone inserido: %i", telefone);
					break;
					
				case 0:
					system("cls || clear");
					printf("Sair do programa!");
					break;
					
				default:
					printf("\nOp��o invalida!");	
			}
		
	} while(opcao != 0);
	
	return 0;
}
