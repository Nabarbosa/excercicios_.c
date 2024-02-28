//Faça um algoritimo que solicite do usuário
//um número inteiro quarquer e mostrar no terminal
//se o número imformado é par ou impar.

#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
	system("cls || clear");
	printf("\n=== SENAI ===\n");
	fflush(stdin);
}

int main (){
	int numero;
	
	cabecalho();
	printf("Digite um numero: ");
	scanf("%i",&numero);
	
	cabecalho();
	if(numero%2==0)
		printf("numero par");
	else
		printf("numero impar");
		
	return 0;
}
