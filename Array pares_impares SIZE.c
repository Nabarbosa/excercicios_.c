#include <stdio.h>
#include <locale.h>

#define SIZE 6

int main() {
	setlocale(LC_ALL,"");
		
		int numero[SIZE], i = 0, pares = 0, impares = 0;
		
		for(i = 0; i < SIZE; i++) {
			printf("\nDigite o %i� numero: ", i+1);
			scanf("%i",&numero[i]);


			//numeros[i] % 2 == 0 ? pares++ : impares++;
						
			if(numero[i] % 2 == 0) {
				pares++;
			} else {
				impares++;
			}
		}
		
		printf("\n=== Exibindo resultados ===\n");
		for(i = 0; i < SIZE; i++) {
			printf("%i� n�mero = %i\n", i+1, numero[i]);
		}
		
			printf("\nQuantidade Pares: %i", pares);
			printf("\nQuantidade �mpares: %i", impares);
		
		return 0;
}
