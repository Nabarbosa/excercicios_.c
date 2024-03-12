#include <stdio.h>

int main() {
	float primeiraNota, segundaNota, media;
	
	do {
		printf("Digite a primeira nota: ");
		scanf("%f",&primeiraNota);
		
		printf("Digite a segunda nota: ");
		scanf("%f",&segundaNota);
		
	} while(primeiraNota, segundaNota < 0 || primeiraNota, segundaNota > 10);
	
	media = (primeiraNota + segundaNota) / 2;
	
	printf("Nota informada: %.1f \n", media);
	
	return 0;
}
