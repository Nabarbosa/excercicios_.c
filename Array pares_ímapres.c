#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
		
		int numero[6], i = 0, pares = 0, impares = 0;
		
		for(i = 0; i < 6; i++) {
			printf("\nDigite o %i� numero: ", i+1);
			scanf("%i",&numero[i]);
			
			if(numero[i] % 2 == 0) {
				pares++;
			} else {
				impares++;
			}
		}
		
		printf("\n=== Exibindo resultados ===\n");
		for(i = 0; i < 6; i++) {
			printf("%i� n�mero = %i\n", i+1, numero[i]);
		}
		
			printf("\nQuantidade Pares: %i", pares);
			printf("\nQuantidade �mpares: %i", impares);
		
		return 0;
}

