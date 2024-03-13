#include <stdio.h>

int main() {
	
	float nota;
	
	printf("Digite uma nota: ");
	scanf("%f",&nota);
	
	while(nota < 0 || nota > 10) {
		printf("Digite uma nota: ");
		scanf("%f",&nota);
	}
	
	printf("Nota informada: %.1f \n");
	
	return 0;
}
