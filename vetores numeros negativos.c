#include <stdio.h>
#include <locale.h>

#define SIZE 5

int main() {
	setlocale(LC_ALL, "");
	
	int numero[SIZE], i, negativo = 0;
	
	for(i = 0; i < SIZE; i++) {
		printf("\nDigite %iº número: ", i+1);
		scanf("%i",&numero[i]);
		
		if(numero[i] == 0) {
			printf("\nNão foi informado um número positivo!");
		}
	}
	
	for(i = 0; i < SIZE; i++) {
		printf("\n%iº número: %i\n", i+1, numero[i]);
	}
	
	return 0;
}
