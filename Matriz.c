#include <stdio.h>

int main() {
	//Inicialização no momento da declaração:
	int numeros[2][2] = {{1,2}, {3,4}};
	
	//Inicialização posterior:
	//int numeros[2][2];
	//Declarando matriz.
	
	//Atribuindo valores em uma matriz.
	numeros[0][0] = 1;
	numeros[0][1] = 2;	
	numeros[1][0] = 3;
	numeros[1][1] = 4;
	
	//Exibindo dados da matriz.
	printf("Elemento 1: %d\n", numeros[0][0]);	
	printf("Elemento 2: %d\n", numeros[0][1]);
	printf("Elemento 3: %d\n", numeros[1][0]);
	printf("Elemento 4: %d\n", numeros[1][1]);
	
	
}
