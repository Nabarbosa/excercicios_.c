//Crie uma função em linguagem C que receba 2 números e
//usando uma função, mostre uma mensagem com a média
//destes dois números informados.
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
	
	printf("Digite o primeiro número: ");
	scanf("%f",&primeiroNumero);

	printf("Digite o segundo número: ");
	scanf("%f",&segundoNumero);
	
	mediaFinal = calcularMedia(primeiroNumero, segundoNumero);
	
	printf("Média final: %.1f", mediaFinal);
	
	return 0;	
}
