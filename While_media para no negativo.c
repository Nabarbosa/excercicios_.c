#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	int numero, soma = 0, contador = 0;
	float media;
	
	printf("Digite um n�mero: ");
	scanf("%i",&numero);
	
	while(numero > 0) {
		contador++;
		soma += numero;
		
	printf("Digite um n�mero: ");
	scanf("%i",&numero);
	}
	
	if (contador == 0) {
		printf("N�o foi informado um n�mero positivo!");
	} else {
		media = soma / (float) contador;
		printf("M�dia: %.1f \n", media);
	}
	
	return 0;
}
