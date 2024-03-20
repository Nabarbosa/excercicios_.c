#include <stdio.h>

int main() {
	int vetor[5];
	int i;
	
	printf("Digite os elementos do vetor:\n");
	for(i = 0; i < 5; i++) {
		printf("Elemento %d: ",i + 1);
		scanf("%d",&vetor[i]);
	}
	
	for (i = 0; i < 5; i++) {
		printf("\nElemento %d: %d\n", i+1, vetor[i]);
	}
	
	return 0;
}
