#include <stdio.h>

int main() {
	float nota;
	
	do {
		printf("Digite uma nota: ");
		scanf("%f",&nota);
		
	} while(nota < 0 || nota > 10);
	
	printf("Nota informada: %.1f \n", nota);
	
	return 0;
}
