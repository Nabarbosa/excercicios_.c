//Crie uma fun��o em linguagem C que receba 2 n�meros e
//usando uma fun��o, mostre uma mensagem com a m�dia
//destes dois n�meros informados.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcularMedia(float n1, float n2) {
	float media;
	media = (n1 + n2) / 2;
	return media;
}
int main(){
	setlocale(LC_ALL,"");
	
	float primeiroNumero, segundoNumero, mediaFinal;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%f",&primeiroNumero);

	printf("Digite o segundo n�mero: ");
	scanf("%f",&segundoNumero);
	
	mediaFinal = calcularMedia(primeiroNumero, segundoNumero);
	
	printf("M�dia final: %.1f", mediaFinal);
	
	return 0;	
}
