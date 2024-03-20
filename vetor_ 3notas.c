#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	float notas[3];
	int i;
	
	printf("\n ===Digite sua nota=== \n");
	for (i = 0; i < 3; i++) {
		printf("Digite sua %dª nota: ",i + 1);
		scanf("%f",&notas[i]);
		
	}
	
	for (i = 0; i < 3; i++) {
		printf("%dª Nota - %.1f\n", i+1, notas[i]);
	}
	
	
	return 0;
}
