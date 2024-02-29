#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho(){
	system("cls || clear");
	printf("\n=== SENAI ===\n");
	fflush(stdin);
}
int main(){
	setlocale(LC_ALL,"");
	int idade;

	printf("Digite sua idade: ");
	scanf("%i",&idade);
	
	if (idade < 18 || idade > 65){
		printf("\n== Não é obrigado a votar ==\n");
		
	} else {
		printf("\n== Obrigado a votar ==\n");
	}
	
	return 0;
}
