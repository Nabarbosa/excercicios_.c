#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	int numero[5], maiorNumero, menorNumero, i;
	
	for (i = 0; i < 5; i++) {
		printf("Digite %iº número: ", i+1);
		scanf("%i",&numero[i]);
	}
	
	printf("\n=== Exibindo números ===\n");
	for (i = 0; i < 5; i++) {
		printf("Número %i - %i\n", i+1, numero[i]);
		
	if (numero[i] > maiorNumero) {
		maiorNumero = numero[i];
	}
	else {
		menorNumero = numero[i];
	}
	}
	
	printf("\n=== Maior número :%i ", maiorNumero);
	printf("\n=== Menor número :%i ", menorNumero);
	
	return 0;
}
