#include <stdio.h>

int main(){
	int i, numero;
	
	printf("Digite um numero: ");
	scanf("%i",&numero);
	
	for (i = 1; i <= 10; i++) {
		printf("%d x %d = %d \n", numero, i, numero*i);
}
	return 0;
}
