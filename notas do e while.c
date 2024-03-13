#include <stdio.h>

int main() {
	float primeiraNota, segundaNota, terceiraNota, media;
	
	do {
		printf("Digite a primeira nota: ");
		scanf("%f",&primeiraNota);
		
		printf("Digite a segunda nota: ");
		scanf("%f",&segundaNota);
		
		printf("Digite a terceira nota:");
		scanf("%f",&terceiraNota);
		
	} while(primeiraNota, segundaNota < 0 || primeiraNota, segundaNota > 10);
	
	media = (primeiraNota + segundaNota + terceiraNota) / 3;
	
	printf("Nota informada: %.1f \n", media);
	
	if (media >=7){
		printf("\nAprovado");
	} else if (media >= 5){
		printf("\nRecuperação");
	} else {
		printf("\nReprovado");
	}
	
	return 0;
}
