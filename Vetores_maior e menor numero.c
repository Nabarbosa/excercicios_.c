#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	int numero[5], maiorNumero, menorNumero, i;
	
	for (i = 0; i < 5; i++) {
		printf("Digite %i� n�mero: ", i+1);
		scanf("%i",&numero[i]);
	}
	
	printf("\n=== Exibindo n�meros ===\n");
	for (i = 0; i < 5; i++) {
		printf("N�mero %i - %i\n", i+1, numero[i]);
		
	if (numero[i] > maiorNumero) {
		maiorNumero = numero[i];
	}
	else {
		menorNumero = numero[i];
	}
	}
	
	printf("\n=== Maior n�mero :%i ", maiorNumero);
	printf("\n=== Menor n�mero :%i ", menorNumero);
	
	return 0;
}
