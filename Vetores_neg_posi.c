#include <stdio.h>
#include <locale.h>

#define SIZE 10

int main() {
	setlocale(LC_ALL, "");
	
	int numero[SIZE], i = 0, positivo = 0, negativo = 0, somaPositivo = 0;
	
	printf("\n === Solicitando dados === \n");
	for(i = 0; i < SIZE; i++) {
		printf("\nDigite %i� n�mero: ", i+1);
		scanf("%i",&numero[i]);
			
		if(numero[i] < 0) {
			negativo++;
		} else {
			positivo++;
			somaPositivo += numero[i];
		}
	
	}
	
	/*for(i = 0; i < SIZE; i++) {
		printf("%.i� n�mero : %i\n", i+1, numero[i]);
	}
	*/
	
	printf("\n=== Exibindo resultados ===\n");
	//printf("\nQuantidade de n�meros positivos: %i\n", positivo);
	printf("\nQuantidade de n�meros negativos: %i\n", negativo);
	printf("\nSoma de n�meros positivos: %i\n", somaPositivo);
	
	return 0;
}
