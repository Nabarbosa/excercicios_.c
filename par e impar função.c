#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//void verificarParouaImpar(int numero) {
//	if (numero % 2 == 0)
//		printf("Par.");
//	else
//		printf("�mpar.");
//}

//Oper��o tern�ria.
//void verificarParouImpar(int numero) {
//	numero % 2 == 0 ? printf("Par.") : printf("�mpar.");
//}

int verificarParouaImpar(int numero) {
	if (numero%2 == 0){
		printf("\n === Par === \n");
	} else {
		printf("\n === �mpar === \n");
	}
}

int main(){
	setlocale(LC_ALL,"");
	
	int numero, resultado;
	
	printf("Digite um n�mero: ");
	scanf("%i",&numero);
	
	resultado = verificarParouaImpar(numero);	
	
	return 0;

}
