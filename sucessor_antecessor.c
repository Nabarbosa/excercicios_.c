#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
	system("cls || clear");
	printf("\n=== SENAI ===\n");
	fflush(stdin);
}
int main(){
	int numero;
	int sucessor, antecessor;
	
	cabecalho();
	printf("Digite um numero: ");
	scanf("%i",&numero);
	
	cabecalho();
	sucessor = numero + 1;
	antecessor = numero - 1;
	
	cabecalho();
	printf("\nSucessor:%i", sucessor);
	printf("\nAntecessor:%i", antecessor);
	
	return 0;
}
