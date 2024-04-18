/*
Crie um programa em C que solicite ao usuário:
- Nome
- Idade
- E-mail
- Telefone

Usando o switch-case, mostre o menu abaixo e utilizando funções mostre para o usuário os dados solicitados conforme a opção desejada:

1 - Mostrar nome e idade;
2 - Mostrar nome e e-mail;
3 - Mostrar nome e telefone;
4 - Mostrar todas as informações;
0 - Sair do programa.

Caso o usuário informe um número que não esteja no menu acima, siga os seguintes passo:
- Será exibida a mensagem: "Opção incorreta, tente novamente."
- Limpe a tela e mostre o menu novamente para o usuário.

Para sair do programa, o usuário deve digitar o número zero, caso contrário, o menu deve ser exibido novamente.
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
			printf("\n4 - Mostrar todas as informações");
			printf("\n0 - Sair do programa");
			printf("\n");
			printf("\nDigite a opção desejada: ");
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
					printf("\nOpção invalida!");	
			}
		
	} while(opcao != 0);
	
	return 0;
}
