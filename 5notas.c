#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
		
int main() {
	setlocale(LC_ALL,"");
		
	int nota, soma, i;
		
		for (i = 1; i <= 5; i++) {
			printf("Digite a %iª nota: ", i);
			scanf("%i",&nota);
			
			soma = soma + nota;
		}
		
	printf("\nSoma: %i \n", soma);
	
	return 0;
}
