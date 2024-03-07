#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//void verificarParouaImpar(int numero) {
//	if (numero % 2 == 0)
//		printf("Par.");
//	else
//		printf("Ímpar.");
//}

//Operção ternária.
//void verificarParouImpar(int numero) {
//	numero % 2 == 0 ? printf("Par.") : printf("Ímpar.");
//}

int verificarParouaImpar(int numero) {
	if (numero%2 == 0){
		printf("\n === Par === \n");
	} else {
		printf("\n === Ìmpar === \n");
	}
}

int main(){
	setlocale(LC_ALL,"");
	
	int numero, resultado;
	
	printf("Digite um número: ");
	scanf("%i",&numero);
	
	resultado = verificarParouaImpar(numero);	
	
	return 0;

}
