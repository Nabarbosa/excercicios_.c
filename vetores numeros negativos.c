#include <stdio.h>
#include <locale.h>

#define SIZE 5

int main() {
	setlocale(LC_ALL, "");
	
	int numero[SIZE], i, negativo = 0;
	
	for(i = 0; i < SIZE; i++) {
		printf("\nDigite %i� n�mero: ", i+1);
		scanf("%i",&numero[i]);
		
		if(numero[i] == 0) {
			printf("\nN�o foi informado um n�mero positivo!");
		}
	}
	
	for(i = 0; i < SIZE; i++) {
		printf("\n%i� n�mero: %i\n", i+1, numero[i]);
	}
	
	return 0;
}
