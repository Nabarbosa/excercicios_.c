#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	int numero, pares = 0, impares = 0, i;
	
	for (i = 1; i <= 5; i++){
		printf("Digite o %iº número: ", i);
		scanf("%i",&numero);
		
		if (numero % 2 == 0) {
			pares = pares + 1;
		} else {
			impares++;
		}
	}
	
	printf("\nQuantidade de pares: %i \n", pares);
	printf("\nQuantidade de ímpares: %i \n", impares);
	
	return 0;
	
}
