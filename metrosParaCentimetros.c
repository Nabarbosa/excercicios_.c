#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float converterMetrosParaCentimetros(int numero){
	return numero * 100;
}

int main(){
	setlocale(LC_ALL,"");
	float numero, resultado;
	
	printf("Digite o número em metros: ");
	scanf("%f",&numero);
	
	resultado = converterMetrosParaCentimetros(numero);
	
	printf("\n === Resultado === \n");
	printf("\nResultado: %.1f centimetros", resultado);
	
	return 0;
	
}

