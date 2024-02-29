#include <stdio.h>
#include <locale.h>

//Algoritmo: Números pares de 100 e 120.
int main(){
	setlocale(LC_ALL,"");
	int i;
	
	printf("Lista de numeros pares: \n");
	for (i = 100; i <= 120; i++) {
		if (i % 2 == 0) {
			printf("%d \n", i);	
		}
		
	}
	
	return 0;
}
